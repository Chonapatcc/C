#include <stdio.h>
struct Point
{
    int X,Y;
};


int main()
{
    int size;
    scanf("%d",&size);
    struct Point array[size];

    for(int i =0 ; i< size; i++)
    {
        printf("P%d.X: ",i+1);
        scanf("%d",&array[i].X);
        putchar('\n');
        printf("P%d.Y: ",i+1);
        scanf("%d",&array[i].Y);
        putchar('\n');

    }

     for(int i =0 ; i< size; i++)
    {
        printf("%d - %d\n",array[i].X,array[i].Y );

    }

    
}