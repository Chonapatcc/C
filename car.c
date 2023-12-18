#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[100];
    fgets(temp,100,stdin);
    int a=atoi(temp);
    if(a<=0 || a>26)
    {
        printf("-");
        return 0;
    }
    for(int i =a-1;i>=0 ; i--)
    {
        printf("%c",97+i);
        if(i!=0)
        {
            printf("-");
        }
    }

    for(int i =1 ; i<a ;i ++)
    {
        printf("-%c",97+i);

    }
    

}