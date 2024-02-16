#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
int main(int argc, char **argv)
{ char *input, found;
FILE *fin;
long fsize;
regex_t regex;
regmatch_t match[3];
int reti, match_size=sizeof(match)/sizeof(match[0]);
char msg[100];
if (argc != 3) {
fprintf(stderr, "Usage: %s filename pattern\n", argv[0]);
return 1;
}
fin = fopen(argv[1], "rb");
if (fin == NULL) {
fprintf(stderr, "File %s not found!\n", argv[1]);
return 1;
}
fseek(fin, 0, SEEK_END);
fsize = ftell(fin);
if ((input=(char *)malloc(fsize+1)) == NULL) {
fprintf(stderr, "Cannot allocate memory %d bytes!\n", fsize);
return 2;
}
fseek(fin, 0, SEEK_SET);
fread(input, fsize, 1, fin);
input[fsize] = 0;
for (int i=0; i < fsize; i++)
if (input[i] == '\r' || input[i] == '\n')
input[i] = ' ';
fprintf(stderr, "file size = %d bytes\n", fsize);
// Compile the regular expression
// ex. (0-[0-9]{4}-[0-9]{4})
reti = regcomp(&regex, argv[2], REG_EXTENDED);
if (reti) {
fprintf(stderr, "Could not compile regex\n");
return 3;
}
// Execute the regular expression
found = 0;
do {
reti = regexec(&regex, input, match_size, match, 0);
switch (reti) {
case 0:
// If there's a captured group
if (match[1].rm_so != -1)
printf("Found: %.*s", match[1].rm_eo - match[1].rm_so,
input + match[1].rm_so);
if (match[2].rm_so != -1)
printf(", %.*s\n", match[2].rm_eo - match[2].rm_so,
input + match[2].rm_so);
else
puts("");
input = input + match[0].rm_eo;
found++;
break;
case REG_NOMATCH:
if (found)
printf("Done!\n");
else
printf("No match!\n");
break;
default:
regerror(reti, &regex, msg, sizeof(msg));
printf("Regex match failed: %s\n", msg);
return 4;
}
} while (!reti);
// Free the compiled regular expression
regfree(&regex);
return 0;
}