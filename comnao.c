#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[5],b[5],c[10] ;
    printf("Enter array a:\n");
    for(int i =0 ; i< 5 ; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d",&a[i]);
    }

    printf("Enter array b:\n");
    for(int i =0 ; i< 5 ; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d",&b[i]);
    }
    i=0;
    for(int y=0 ; y<5; y++)
    {
        c[i++]=a[y];
    }
    for(int y=0 ; y<5; y++)
    {
        c[i++]=b[y];
    }

    printf ("Array c: ");
    for (i=0;i<10;i++)
        printf ("%d ",c[i]);

    printf ("\n");
    return 0;
}