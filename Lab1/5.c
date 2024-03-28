#include <stdio.h>

int main()
{
    int amount = 98;
    int money_type[4] = {50,20,5,1};
    int count[4] = {0};

    for(int i =0 ;  i< 4;i++)
    {
        if(amount >=money_type[i])
        {
            count[i] = amount/money_type[i];
            amount -= money_type[i]*count[i];
        }
    }

    for(int i =3 ; i>=0; i--)
    {
        printf("%d: %d\n" ,money_type[i] , count[i] );
    }


    

    return 0;
}