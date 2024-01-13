#include <stdio.h>
#include <stdlib.h>


cat(int x)
{
    printf("%d" , x );
}


int main()
{ 
    char arr[10] ; 
    char *p = arr;
    *p  = getchar();

    printf("%c",arr[0]);


}

