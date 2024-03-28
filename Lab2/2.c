#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sticker;
    double price;
    int discount_rate[6] ={0,1,2,3,6,9};
    int percent[6] ={0,10,15,20,30,40};
    scanf("%d %lf",&sticker , &price);
    int discount=0;
    int i=0;
    for(i=0 ;i < 5; i++)
    {
        if(sticker<discount_rate[i])
        {
            i--;
            break;
        }
    }
    discount= percent[i];


    printf("You get %d percents discount.\n",discount);
    printf("Total amount due is %.2lf Baht.\n",price-price*percent[i]/100);
    printf("And you have %d stickers left.\n",sticker -= discount_rate[i]);



}