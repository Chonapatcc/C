#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
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

void Implement(Product *item)
{
    strcpy(item->name,"");
    item->amount =0 ;
    item->totalCost = 0;
}

void stockFinder(Product stocks[],int size , char name[], int amount , double price)
{   
    int ch =1 ;
    int i;
    for(i =0 ; i< size; i++)
    {
        if(strcmp(stocks[i].name,"")==0)
        {
            break;
        }

        if(strcmp(stocks[i].name,name)==0)
        {
            stocks[i].amount+=amount;
            stocks[i].totalCost+=price;
            ch=0;
        }
    }

    if(ch)
    {
        strcpy(stocks[i].name,name);
        stocks[i].amount = amount;
        stocks[i].totalCost = price;
    }
    

}

void reportStock(char *file)
{
    FILE *ptr = fopen(file,"r");
    int size;
    fscanf(ptr,"%d\n",&size);
    Product stocks[size] ;
    for(int i =0 ; i< size ;i++)
    {
        Implement(&stocks[i]);
    }

    char name[100];
    int amount;
    double price;

    while(fscanf(ptr,"%*[^,],%*[^,],%[^,],%d,%lf",name,&amount,&price)==3)
    {
        stockFinder(stocks,size,name,amount,price);
    }

    printStock(stocks,size);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}