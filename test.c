#include <stdio.h>
#include <math.h>


int main()
{
    int a[]={1,2,3,4};

    int* p =&a[0];
    int x,y;
    for(int i=0 ; i< 4; i ++,*p++)
    {
        printf("%d\n",*p);
    }

    
}