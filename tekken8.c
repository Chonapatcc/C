#include <stdio.h>

struct student
{
    char id[20];
    int mid,final;
};

void calculateGrade(struct student list[],int size)
{
    for(int i=0 ; i< size; i++)
    {
        int s1=list[i].mid,s2=list[i].final;
        int all=s1+s2;

        int arr1[6] = {50,60,70,80,101};
        char arr2[6]="FDCBA";
        char tp;
        for(int y=0 ; y<5 ;y++)
        {
            if(all<arr1[y])
            {
                tp=arr2[y];
            
                break;
            }
        }
        printf("Student ID %s receives grade %c.\n",list[i].id,tp);
    }
}

int main()
{
    struct student list[5];
    for(int i=0 ;i <5 ;i++)
    {
        
        printf("Enter Student ID: ");
        scanf("%s",&list[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d",&list[i].mid);
        printf("Enter Student Final: ");
        scanf("%d",&list[i].final);

    }

    calculateGrade(list,5);
}