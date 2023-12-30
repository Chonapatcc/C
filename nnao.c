#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d",&n);
    double a=0,per=1,sign=1;

    for(double i=0 ; i<n ; i++)
    {
        a+=4/per*sign;
        sign*=-1;
        per+=2;
    }
    printf("%.10lf",a);
    
}