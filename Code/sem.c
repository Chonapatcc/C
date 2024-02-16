#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Enter number of subject(s): ");
    int n;
    scanf("%d" ,&n );
    
    char temp[10],x;
    scanf("%c",&x);
    char arr[]="fdcba";
    double cred,grade,credsum=0,gc=0;
    for(int i=0 ; i < n ; i++)
    {
        printf("Enter credit,grade for subject #%d: ",i+1);
        fgets(temp,10,stdin);
        cred=(double) temp[0]-'0';
        
        
        for(int i=0 ; i <=4 ; i++)
        {
            if(tolower(temp[2])==arr[i])
            {
                grade= i ; 
                break;
            }
        }
        //printf("%lf %lf" , cred,grade);
        gc+=cred*grade;
        credsum+=cred;


    }
    printf("GPA = %.2lf",gc/credsum);
}