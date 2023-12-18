#include <stdio.h>
#include <stdlib.h>

int recur(int n,int n2)
{
    if(n2==0)
    {
        return 0;
    }
    if(n>=n2)
    {
        printf("1");
        recur(n-n2,n2/2);
    }
    else
    {
        printf("0");
        recur(n,n2/2);
    }
}

int recurexpo(int n, int expo)
{
    if(expo>n)
    {
        return expo/2;
    }

    recurexpo(n,expo*2);

}

int main()
{
    char a[100];
    fgets(a,100,stdin);
    int n=atoi(a),expo=1;
    if(n==0)
    {
        printf("0");
        return 0;
    }
    if(n<0)
    {
        printf("-");
        n=-n;
    }
    expo=recurexpo(n,expo);

    recur(n,expo);


}