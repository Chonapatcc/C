#include <stdio.h>
#include <stdlib.h>
int printminus(int n)
{
    for(int y =0 ;y<n ; y++)
        {
            printf("-");
        }
    return 0;
}

int main()
{
    char a[100];
    fgets(a,100,stdin);

    int n=atoi(a);
    if(n<=0 || n>26)
    {
        printf("-");
        return 0;
    }
    for(int i=1 ; i<n ; i++)
    {

        int minus=(n-i)*2-1;
        printminus(minus+1);
        
        for(int y=1 ;y<=i ;y++)
        {
            
            printf("%c",97+n-y);
            if(y!=i)
            {
                printf("-");
            }
        }
        for(int y= 1 ;y<i ;y++)
        {
            printf("-%c",97+n-i+y);
            
        }

        printminus(minus+1);

        printf("\n");

    }
    for(int i=n ; i>0 ; i--)
    {

        int minus=(n-i)*2-1;
        printminus(minus+1);
        
        for(int y=1 ;y<=i ;y++)
        {
            
            printf("%c",97+n-y);
            if(y!=i)
            {
                printf("-");
            }
        }
        for(int y= 1 ;y<i ;y++)
        {
            printf("-%c",97+n-i+y);
            
        }

        printminus(minus+1);

        printf("\n");

    }
}
