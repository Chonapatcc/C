#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a;
    printf("Input n = ");
    scanf("%lld",&a);
    long long int b=a*a;
    long long int  tp = a;
    printf("n^2 = %lld\n",b);

    int ch=1; 
    while(a>0)
    {
        int x=a%10 , y=b%10;
        if(x!=y)
        {
            ch=0;
            break;
        }
        a/=10;
        b/=10;
    }
    if(ch)
    {
        printf("Yes. %lld is automorphic number.",tp);
    }
    else
    {
        printf("No. %lld is not automorphic number.",tp);
    }



}