#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[100];
    long long int a,b;
    fgets(temp,100,stdin);
    a=atoll(temp);
    fgets(temp,100,stdin);
    b=atoll(temp);
    

    
    
    int gcd,lcm,x,y,eu;
    if(a>b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    int t;
    eu=x%y;
    while(eu!=0)
    {
        x=y;
        y=eu;
        eu=x%y;
    }
    gcd=y;
    lcm=a*b/gcd;

    printf("GCD: %lld\n",gcd);
    printf("LCM: %lld\n",lcm);
    

}