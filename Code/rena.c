#include <stdio.h>



int main()
{
char t[1000]={};
    printf("String (without a space): ");
    scanf("%s",t);


    char vow[5]= "aeiou";
    int c=0;
    for(int i=0 ; i<sizeof(t) ; i++)
    {
        char x;
        if(t[i]>=65 && t[i]<=90)
        {
            x=t[i]+32;
        }
        else
        {
            x=t[i];
        }
        for(int y =0 ; y< 5; y++)
        {
            if(x==vow[y])
            {
                printf("%c ",t[i]);
                c++;
            }
                
        }
    }
    


    if(c<=1)
    {
        printf("\nThis string contains %d vowel.",c);

    }
    else
    {
        printf("\nThis string contains %d vowels.",c);

    }


    

}