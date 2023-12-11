
#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    printf("Welcome to My Pizza Shop!!");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~");
    double size,pep,cheese,mush;
    char a[5];
    
    printf("\nEnter pizza size (1=s, 2=m, or 3=l): ");
    fgets(a,5,stdin);
    int s[]={10,16,20};
    size=s[atoi(a)-1];

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(a,5,stdin);
    
    pep=atoi(a);
    
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(a,5,stdin);
    cheese=atoi(a);
    
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(a,5,stdin);
    mush=atoi(a);
    
    double fixedcost=5,basecost=2,extracost=0;
    if(pep)
    {
        extracost+=0.5;
    }
    if(cheese)
    {
        extracost+=0.25;
    }
    if(mush)
    {
        extracost+=0.30;
    }


    double area=M_PI*(size*size)/4;
    double cal=1.5*(fixedcost+(basecost*area)+(extracost*area));
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\nYour order costs %.2f baht.",cal);
    printf("\nThank you.");
    
}