#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("Enter your goal amount: ");

    fgets(a,100,stdin);

    double goal=atoi(a),sum=0,temp;

    int day=0;

    while(sum<goal)
    {
        if(day>0)
        {
            printf("\n");
        }
        printf("Enter money collected today: ");
        fgets(a,100,stdin);
        double val=atof(a);
        if(val<=0)
        {
            continue;
        }
        sum+=val;
        day++;
        if(sum>=goal)
        {
            break;
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.",day,sum,goal-sum);
    }
    char s='\0';
    if(day!=1)
    {
        s='s';
    }


    printf("Congratulations! You take %d day%c to reach your goal.",day,s);
}