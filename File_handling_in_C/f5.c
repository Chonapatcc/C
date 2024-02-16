#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
char id[12];
char name[40];
int dept_code;
} Student;
void getString(char *prompt, char *buffer, int size)
{ char *c;
printf("%s", prompt);
fflush(stdout);
fgets(buffer, size, stdin);
for (c=buffer; *c && *c != '\n'; c++);
*c = 0;
}
int main()
{ Student std_rec;
FILE *fp;
char buffer[80];
if ((fp=fopen("students.bin", "wb")) == NULL) {
fprintf(stderr, "File could not be opened for write!\n");
return 1;
}
while (1) {
getString("Id: ", std_rec.id, sizeof(std_rec.id));
if (strstr(std_rec.id, "exit"))
break;
getString("Name: ", std_rec.name, sizeof(std_rec.name));
getString("Dept: ", buffer, sizeof(buffer));
std_rec.dept_code = atoi(buffer);
fwrite(&std_rec, sizeof(std_rec), 1, fp);
}
fclose(fp);
return 0;
}