#include <stdio.h>
int main()
{   FILE *fp;
    unsigned int data;
    if ((fp=fopen("binary.bin", "rb")) == NULL) 
    {
        fprintf(stderr, "File not found\n");
        return 1;
    }
    fread(&data, sizeof(data), 1, fp);
    printf("%u", data);
    fclose(fp);
    return 0;
}