#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[]="ABC";
    int arr[3];
    for(int i =0 ; i< 3 ;i ++)
    {
        char temp[10];

        printf("Enter length of side %c: ",t[i]);
        fgets(temp,5,stdin);
        arr[i]=atoi(temp);



        
    }
    //sort
    int temp;
    for(int i =0 ; i<3-1 ;i++)
    {

        for(int y=i+1; y<3; y++)
        {
            if(i==y)
            {
                continue;
            }
            if(arr[i]>arr[y])
            {
                temp=arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
        }
    }



    int a,b,c;
    a=arr[0];
    b=arr[1];
    c=arr[2];
    //printf("%d %d %d",a,b,c);

    if(a==b && a==c)
    {
        printf("Triangle type is equilateral.");
    }
    else if(a+b<=c ||a<=0)
    {
        printf("Triangle type is invalid.");
    }
    else if(a!= b && a!=c && b!=c)
    {
        printf("Triangle type is scalene.");
    }
    else
    {
        printf("Triangle type is isosceles.");
    }


}