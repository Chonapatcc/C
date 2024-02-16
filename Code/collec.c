#include <stdio.h>
#include <stdlib.h>
int main()
{
    char temp[100];
    printf("Enter your goal amount: ");
    fgets(temp,100,stdin);
    double goal=atof(temp),sum=0,dif;
    int day=0;

    while(sum<goal)
    {
        if(sum!=0)
        {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,sum,dif);
        }
        char temp2[100];
        printf("Enter money collected today: ");
        fgets(temp2,100,stdin);
    
        double in=atof(temp2);
  
        sum+=in;
        day++;
        dif=goal-sum;
        
    }

    if(day==1)
    {
        printf("Congratulations! You take %d day to reach your goal.",day);
    }
    else
    {
        printf("Congratulations! You take %d days to reach your goal.",day);
    }

}