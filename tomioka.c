#include <stdio.h>
void roman2arabic(char input[],char output[])
{
    char ara1[3]="IVX";
    int val[3]={1,5,10};
    
    char temp[80];
    int idtemp=0;
    
    int count =0;
    for(int i =0 ; input[i]!='\0';i++)
    {
        int ch=1;
        int x=0;
        for(int loop3 = 0 ; loop3<3;loop3++)
        {
            if(input[i]==ara1[loop3])
            {
                ch=0;
                x=val[loop3];
                break;
            }
        }
        if(count >= x)
        {
            count +=x;
        }
        else
        {
            count = x-count;
        }
        if(ch)
        {
            if(count > 0)
            {
                temp[idtemp++] = count +'0';

                count =0 ;
            }

            temp[idtemp++] = input[i];
        }
    }
    if(count >0)
    {
        temp[idtemp++] = count +'0';
        count =0 ;
    }
    temp[idtemp]= '\0';

    // replace
    for(int i=0 ; i<idtemp; i++)
    {
        output[i] = temp[i];
    }
    output[idtemp]= '\0';
   
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}