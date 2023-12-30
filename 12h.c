#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    char a[10],temp[]="  "; 
    fgets(a,10,stdin);
    int c=0,h,m;
    for(int i=0 ; i<10 ; i ++ )
    {
        
        if(a[i]==':')
        {
            h=atoi(temp);
            temp[0]=' ';
            temp[1]=' ';

            c=0;
            continue;
        }
        if(a[i]==' ')
        {
            m=atoi(temp);
            temp[0]=' ';
            temp[1]=' ';
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

    h%=12;
    if(tolower(temp[0])=='p')
    {
        h+=12;
    }
    

    printf("Equivalent 24-hour time: %02d:%02d",h,m);





}