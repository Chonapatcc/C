#include <stdio.h>
#include <stdlib.h>
int main()
{
    char temp[100];

    printf("Enter your goal amount: ");
    fgets(temp,100,stdin);
    double goal=atoi(temp),sum=0;
    int day=0;

    while(sum<goal)
    {
        if(sum!=0)
        {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,sum,goal-sum);
        }
        char temp2[100];
        printf("Enter money collected today: ");
        fgets(temp2,100,stdin);
    
        double in=atof(temp2);
        if(in<=0)
        {
            continue;
        }
        sum+=in;
        day++;
        
    }
    printf("Congratulations! You take %d days to reach your goal.",day);




}