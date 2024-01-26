#include <stdio.h>
void func(char old[],char new[],int size)
{
    for(int i=0 ; i< size ; i++)
    {
        old[i] = new[i];
    }

}
int main()
{
    int size;
    int n;
    scanf("%d %d",&size,&n);

    char old[size]; 
    scanf("%s", old);
    int cc=1;
    for(int i=1 ; i<n ; i++)
    {
        char new[size] ;
        scanf("%s", new);
        int c=0 ;
        for(int i=0 ; i<size; i ++ )
        {
            if(old[i]!=new[i])
            {
                c++;
                
            }
            if(c>2)
            {
                break;
            }
        }
        if(c<=2)
        {
            func(old,new,size);
        }
        else
        {
            printf("%s", old);
            cc=0;
            break;
            
        }

    }
    if(cc)
    {
    printf("%s", old) ; 

    }
}