#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[100];

    int a,b;

    fgets(temp,100,stdin);
    a=atoi(temp);
    fgets(temp,100,stdin);
    b=atoi(temp);
    int x,y;
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
    int carry=x%y;
    while (carry!=0)
    {
        //printf("%d\n" , carry);
        x=y;
        y=carry;
        carry=x%y;
    }
    if(b/y==1)
    {
        printf("= %d",a/y);
    }
    else
    {
        printf("= %d/%d",a/y,b/y);
    }


    
      
    

}