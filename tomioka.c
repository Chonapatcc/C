#include <stdio.h>
void roman2arabic(char input[],char output[])
{
    char ara1[3]="IVX";
    char list[][4]={"I","II","III","IV","V","VI","VII","VIII","IX"};
    char text[10]={};
    int idtext=0;
    char temp[80];
    int idtemp=0;

    for(int i =0 ; input[i]!='\0';i++)
    {
        int ch=1;
        for(int y=0 ;y<3; y++)
        {
            if(input[i]==ara1[y])
            {
                text[idtext++] = input[i];
                ch=0;
                break;
            }
        }
        if(ch)
        {
            if(idtext>0)
            {
                printf("%s\n",text);
            }
            for(int re =0 ;re<idtext;re++)
            {
                text[re]=0;
            }
            idtext=0;

            temp[idtemp++]=

        }
    }
    if(idtext>0)
    {
    
        printf("%s\n",text);
    }
    

    
    


}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}