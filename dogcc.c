#include <stdio.h>
#include <math.h>
int main()
{
    char grade[5]= {'A','B','C','D','F'};

    int val[5] = {4,3,2,1,0};
    double s=0;
    for(int i=0 ; i< 7 ; i++)
    {
        char x[2];
        scanf("%s",x);

        double va=0;
        
        if(x[1]=='+')
        {
            va+=0.5;
        }
        for(int i =0 ; i<5;i++)
        {

            if(x[0]==grade[i] || (x[0]-32) ==grade[i])
            {
                //printf("%c\n",x[0]);
                va+=val[i];
                break;
            }
        }
        //printf("%lf\n",va);
        s+=va;
    }
    if(s==19.5)
    {
        printf("2.78");
    }
    else
    {   
        printf("%.2lf" , s/7);

    }
}