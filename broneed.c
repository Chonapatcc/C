#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product 
{
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}
void reportStock(char *filename)
{
    FILE *file= fopen(filename,"r");
    int number;
    char text[100];
    
    fgets(text,100,file);
    number = atoi(text);
    
    char temp[100];
    char name[100];
    int amount;
    double cost; 
    Product stock[number];
    for(int i= 0; i<number;i++)
    {
        strcpy(stock[i].name,"empty");

    }
    
    while(fgets(text,100,file))
    {   //stock-log-20170401.txt
        //20170401,12:54:00,T Shirt L,1,120.00
        char *token;
        token = strtok(text, ",");
        int c=0;
        while( token != NULL ) 
        {
            if (c==2)
            {
                strcpy(name,token);
            }
            else if(c==3)
            {
                amount = atoi(token);
            }
            else if (c==4);
            {
                cost = atof(token);
            }
            
            token = strtok(NULL, ",");
            c++;
        }
        for(int i =0 ; i<number ; i++)
        {
            if(strstr(stock[i].name,name))
            {
                stock[i].amount+= amount;
                stock[i].totalCost+=cost;
                break;
            }
            else if (strstr(stock[i].name,"empty"))
            {
                strcpy(stock[i].name,name);
                stock[i].amount= amount;
                stock[i].totalCost=cost;
                break;
            }
        }

    }
    printStock(stock,number);


}


int main()
{
    char filename[]="stock-log-20170401.txt";
    //scanf("%s", filename);
    reportStock(filename);
}