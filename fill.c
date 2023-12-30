#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int a[n][n];

    for(int i =0 ; i<n ;i++)
    {
        for(int y =1 ; y<=n ; y++)
        {
            a[i][y-1]=y+i;
        }
    }


    for(int i =0 ; i< n ; i++)
    {
        for(int y=0 ; y< n ;y++)
        {
            printf("%2d ",a[i][y]);
        }
        printf("\n");
    }

}
