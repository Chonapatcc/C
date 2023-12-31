#include <stdio.h>
#include <math.h>


int main()
{
    int a[]={1,2,3,4};

    int *p =&a[0], *end=&a[3];
    int x,y;
    for(int i=0 ; i< 8;i++)
    {
        if(p>end)
        {
            p-=4;
        }
        printf("%d\n",*p);
        p++; 
    }

    
}