#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct Point
{
    double X,Y;
};


int main()
{
    printf("Number of Points: ");
    int p;
    scanf("%d",&p);

    struct Point points[p];
    for(int i=0 ; i<p ; i++)
    {
        printf("P%d.X: ",i+1);
        scanf("%lf",&points[i].X);
 
        
        printf("P%d.Y: ",i+1);
        scanf("%lf",&points[i].Y);
 
    }
    printf("Length:\n");
    for(int i =1 ;i<p ; i++)
    {
        double x1,y1;
        double x2,y2;
        x1=points[i-1].X;
        y1=points[i-1].Y;
        x2=points[i].X;
        y2=points[i].Y;

        double x=x1-x2,y=y1-y2;
        double ans=sqrt(x*x+y*y);

     

        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",i,x1,y1,i+1,x2,y2,ans);
    }
}