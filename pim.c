#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int n;
    char temp;
    printf("Enter n: ");
    scanf("%d",&n);

    //printf("%d" ,n) ;
    for(int i =1 ; i<=n ; i++)
    {
        
        for(int y=0 ; y<i ; y++)
        {
            if(y%2==0)
            {
                printf("-");
            }
            else
            {
                printf("x");
            }
            
        }
        printf("\n");
    }
    for(int i=n-1; i>0; i--)
    {
        for(int y=0 ; y<i ; y++)
        {
            if(y%2==0)
            {
                printf("-");
            }
            else
            {
                printf("x");
            }
            
        }
        printf("\n");
    }
    
}