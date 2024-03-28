#include<stdio.h>
int main()
{
    
    double preGrade = 1.75;
        
    double preCredit = 21;
        
    double credit = 18;
        
    double requiredGrade = 2.00;
    
    // 2.00 =  1.75+x/21+18
    // 2.00*(21+18)-1.75 = x

    double result = (requiredGrade*(preCredit+credit)-(preGrade*preCredit))/credit;
    printf("%lf",result);
    return 0;
}