#include <stdio.h>
#include <stdlib.h>


int main()
{
    double b;
    int a;
    char temp[100];
    
    fgets(temp,100,stdin);
    a=atoi(temp);
    fgets(temp,100,stdin);
    b=atof(temp);

    int arr[6]={0,1,2,3,6,9} ,arr2[6]={0,10,15,20,30,40} ,per=0,ind=0,st=0;
    for(int i =0 ; i< 6 ; i++)
    {
        if(a>=arr[i])
        {
            st=arr[i];
            per=arr2[i];
        }
        else
        {
            break;
        }
        
    }

    printf("You get %d percents discount.\n",per);
    printf("Total amount due is %.2f Baht.\n",b-(b/100*per));
    printf("And you have %d stickers left.",a-st);


}