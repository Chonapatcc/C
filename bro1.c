#include <stdio.h>
#include <stdlib.h>

void recur(char *arr , int a,int b,int x, int y,int num)
{
    int direc[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
    *((arr+a*x) + y)=num;
    for(int i =0 ; i< 4 ; i++)
    {
        int dix=x+direc[i][0];
        int diy=y+direc[i][1];
        if(dix>=0 && dix<a&&diy>=0 &&diy<b)
        {
            recur(&arr[dix][diy] ,a,b,x,y,num);
        }
    }
}
int main()
{
    int a,b;
    scanf("%d %d\n",&a,&b);
    char arr[a][b+1];
    for(int i =0 ;i<a;i++)
    {
        fgets(arr[0],b+2,stdin);
        
    }
    int num =0;
    
    for(int i= 0 ; i<a;i++)
    {
        for(int y= 0 ; i< b ;i ++)
        {
            if(arr[i][y]=="#")
            {
                recur(&arr[i][y] ,a,b,i,y,num);
                num++;
            }
        }
    }
    
}