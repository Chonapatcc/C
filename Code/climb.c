#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Input number of stairs: ");
    int a;
    scanf("%d" , &a) ;

    int round=1,com=1 ;
    int head=a-2, body=a-1;
    while(com!=0 )
    {
        printf("---- round %d ----\n",round);
        round++;

        for(int i=0 ; i< a ;i ++)
        {
            if(head==i)
            {
                printf("|-O-|");
            }
            else if(body==i)
            {
                printf("|-^-|");
            }
            else
            {
                printf("|---|");
            }
            printf("\n");
        }
        printf("Input step command: ");
        scanf("%d" , &com);
        
        head-=com;
        body-=com;  
        if(head>a-2 || body >a-1)
        {
            
            head=a-2;
            body=a-1;
        }
        if(head<0 || body<1)
        {
            head=0;
            body=1;
        }
        
        
    }
}