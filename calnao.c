#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char temp[10];
    printf("Initial Value: "); 
    fgets(temp,10,stdin);
    
    double n=atof(temp);

    char a;
    double val;
    while(1)
    {
        printf("\nOperator: ");
        fgets(temp,10,stdin);
        a=temp[0];
        if(a!='+' && a!='-' && a!='*' && a!='/')
        {
            printf("\n");
            break;
        }
        printf("Input Value: ");
        fgets(temp,10,stdin);
        val=atof(temp);
        if(a=='+')
        {
            n+=val;
        }
        else if(a=='-')
        {
            n-=val;
        }
        else if(a=='*')
        {
            n*=val;
        }
        else
        {
            n/=val;
        }

        printf("Present Value is %.4lf\n",n);
    }
    printf("Finish Calculation. Final Value is %.4lf",n);






}