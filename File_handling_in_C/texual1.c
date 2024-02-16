#include <stdio.h>
int main()
{   FILE *fp;
    unsigned int data;
    if ((fp=fopen("textual.txt", "r")) == NULL) 
    {
        fprintf(stderr, "File not found\n");
        return 1;
    }
    fscanf(fp, "%u", &data);
    printf("%u", data);
    fclose(fp);
    return 0;
}