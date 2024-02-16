#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *num[10];
    int x[10] ={3,4,5,3,1,7,1,8,9,10};
    for(int i=0 ;i<10 ;i++)
    {
        num[i]=(int *)malloc(sizeof(int));
        *num[i]= x[i];
    }
   
    for(int i =0 ; i< 10 ;i++)
    {
        for(int y =i+1 ;y<10 ;y++)
        {
            if(*num[i]>*num[y])
            {
                int *temp=num[i];
                num[i]=num[y];
                num[y]=temp;

            }
            else if(*num[i]==*num[y])
            {
                if(num[i]>num[y])
                {
                    int *temp= num[i];
                    num[i]=num[y];
                    num[y]=temp;
                }
            }
        }
    }
    
    for(int i =0;i<10 ;i++ )
    {
        
        cout <<*num[i]<< " " << num[i]  <<endl;
    }

    
}