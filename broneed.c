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
    char text[1000];
    
    fgets(text,1000,file);
    number = atoi(text);
    
    char temp[1000];
    char name[1000];
    int amount;
    double cost; 
    char list[5][100];
    Product stock[number+1];
    int cstock=0;
    
    while(fgets(text,1000,file))
    {   //stock-log-20170401.txt
        //20170401,12:54:00,T Shirt L,1,120.00
        char *token;
        token = strtok(text, ",");
        int c=0;
        while( token != NULL ) 
        {
            strcpy(list[c],token);
            
            token = strtok(NULL, ",");
            c++;
        }
        strcpy(name,list[2]);
        amount = atoi(list[3]);
        cost = atof(list[4]);
        if(amount==0 || cost==0 ||(strstr(list[0],"20170401")==NULL))
        {
            continue;
        }
        for(int i =0 ; i<number ; i++)
        {
            if(strstr(stock[i].name,name))
            {
                stock[i].amount+= amount;
                stock[i].totalCost+=cost;
                break;
            }
            else if (i==cstock)
            {
                strcpy(stock[i].name,name);
                stock[i].amount= amount;
                stock[i].totalCost=cost;
                cstock++;
                break;
            }
        }

    }
    printStock(stock,number);
    fclose(file);

}


int main()
{
    char filename[]="stock-log-20170401.txt";
    //scanf("%s", filename);
    reportStock(filename);
}