#include <stdio.h>

struct vector 
{
    double x[3];

};

int main()
{
    struct vector u,v;
    printf("Enter u: ");
    for(int i=0 ; i<3; i++)
    {
        scanf("%lf",&u.x[i]);
    }
    printf("Enter v: ");
    for(int i=0 ; i<3; i++)
    {
        scanf("%lf",&v.x[i]);
    }

    // for(int i=0 ; i<3; i++)
    // {
    //     printf("%lf ",u.x[i]);
    // }
    // printf("\n");
    // for(int i=0 ; i<3; i++)
    // {
    //     printf("%lf ",v.x[i]);
    // }
    double ans[3];

    for(int i =0 ; i< 3; i++)
    {
        double cal;
        int a1=i+1,a2=i+2;
        a1%=3;
        a2%=3;
        //printf("%lf %lf %lf %lf \n",u.x[a1],v.x[a2],u.x[a2],v.x[a2]);
        cal = u.x[a1]*v.x[a2] -u.x[a2]*v.x[a1];
        ans[i]=cal;

    }
    printf("u x v = ");
    for(int i=0 ; i< 3; i ++)
    {
        printf("%.1lf ",ans[i]);
    }


    return 0;
}