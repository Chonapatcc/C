#include <stdio.h>
#include <string.h>

int main()
{
    char cat[]="alien";

    int a,b;
    a=sizeof(cat);
    b=strlen(cat);
    printf("%d %d",a,b);
}