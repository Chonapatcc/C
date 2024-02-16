#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[10];
    
    fgets(a,2,stdin);
    int as=a[0];
    
    if(as>=48 && as<=57)
    {
        printf("Output: digit");
    }
    else if(as>=65 && as<=90)
    {
        printf("Output: upper case");
    }
    else if(as>=97 && as<=122)
    {
        printf("Output: lower case");
    }
    else
    {
        printf("Output: others");
    }
}