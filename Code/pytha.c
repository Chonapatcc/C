#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d" , &a);
    int ch=0;

    for(int i =1 ; i<=a; i ++)
    {
        if(a-i <i)
        {
            break;
        }
        for(int y=i+1 ; y<a-i; y++)
        {
            int z=a-i-y;
            if(i*i+y*y>z*z)
            {
                break;
            }
            if(i*i+y*y==z*z)
            {
                printf("(%d, %d, %d)",i,y,z);
                ch=1;
                exit(0);
            }
        }
    }

    printf("No triple found.");

}