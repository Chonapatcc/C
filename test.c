#include <stdio.h>
#include <math.h>

unsigned char zero(int d)
{
    int c;
    if((c=getchar())==EOF)
        return d;
    else
        return zero(d+(c>='0' && c<='9'))+(c=='0');
}


int main()
{
    int arr[10]={1,2,3};

    int *p=arr[0];


}