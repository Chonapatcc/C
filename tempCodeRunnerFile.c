#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    char a[10],temp[3]={0,0}; 
    fgets(a,10,stdin);
    int c=0,h,m;
    for(int i=0 ; i<10 ; i ++ )
    {
        
        if(a[i]==':')
        {
            h=atoi(temp);
            c=0;
            continue;
        }
        if(a[i]==' ')
        {
            m=atoi(temp);
            c=0;
            continue;
        }
        if(a[i]=='M' || a[i]=='m')
        {
            temp[c++]=a[i];
            break;
        }
        
        temp[c++]=a[i];
    }

    if(tolower(temp[0])=='p')
    {
        h+=12;
        if(h>=24)
        {
            h-=12;
        }
    }
    else
    {
        if(h>=12)
        {
            h-=12;
        }
    }
    

    printf("Equivalent 24-hour time: %02d:%02d",h,m);





}