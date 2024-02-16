#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    int ans=(pow(1+sqrt(5),n)-pow(1-sqrt(5),n))/(pow(2,n)*sqrt(5));
    return ans;
}
int main()
{
    char temp[100];
    int a;
    fgets(temp,100,stdin);

    a=atoi(temp);

    for(int i=0 ; i<=a ; i++)
    {
        printf("F(%d) = %d\n",i,fibo(i));
    }
}