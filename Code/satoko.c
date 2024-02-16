#include <stdio.h>

int charcount(char *s)
{
   int n =0;
   while(*(s+n)!='\0')
   {
        n++;
   }
   return n ;

}

void charweave(char *s,char *result)
{
    int n = charcount (s);
    int t1,t2=n/2;
    t1=n-t2;
    int id=0;
    char arr[100];
    for(int i =0 ; i< t1 ;i++)
    {
        if(i!=(n-i-1))
        {
            arr[id++]=*(s+i);
            arr[id++]=+*(s+(n-i-1));
        }
        else
        {
            arr[id++]=*(s+i);
        }
        
    }
    int x=0;
    for(int i =0 ; i<id ; i++)
    {
        *(result+x++)=arr[i];
    }
    for(int i=id-1; i>=0 ;i--)
    {
        *(result+x++) = arr[i]; 
    }
    *(result+x) = '\0';
    
}



int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}