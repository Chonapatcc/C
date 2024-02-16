#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in[10];
    int temp;
    fgets(in,10,stdin);
    temp=atoi(in);

    for(int i = temp; i >=0; i--)
    {
        printf("%d\n",i);
    }

}