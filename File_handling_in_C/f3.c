#include <stdio.h>
int main(int argc, char **argv)
{   char c;
    FILE *fin;
    if (argc != 2) 
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return 1;
    }
    fin = fopen(argv[1], "r");
    if (fin == NULL) 
    {
        fprintf(stderr, "File %s not found!\n", argv[1]);
        return 1;
    }
    while ((c=fgetc(fin)) != EOF)
        putchar(c);
    fclose(fin);
    return 0;
}