#include <stdio.h>
#include <math.h>


int main()
{
    char t[100];

    fgets(t,100,stdin);

    for(int i=0 ; i<sizeof(t)/sizeof(t[0]) ;i++)
    {
        if(t[i]=='\n')
        {
           break;
        }
        printf("%c" ,t[i]);
    }
    
}