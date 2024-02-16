#include <stdio.h>
#include <stdlib.h>
int main()
{
    char mon_str[100];

    fgets(mon_str,100,stdin);

    double income=atof(mon_str);

    if(income>=0)
    {
        double sum=0;

        if(income>300000)
        {
            sum+=(300000)*5/100;
            income-=300000;
            sum+=income*10/100;
        }
        else
        {
            sum+=income*5/100;
        }
        


        printf("%.2f",sum);
    }
    else
    {
        printf("Error: Salary must be greater or equal to 0");
    }
}