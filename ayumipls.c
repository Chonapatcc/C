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

void reportStock(char *filename)
{
    FILE *fp = fopen(filename, "r");
    char day[11], time[11], name[30];
    int nStock,num_items=0,amount;
    double cost;
    fscanf(fp,"%d\n",&nStock);
    Product stock[nStock];
    while (fscanf(fp,"%*[^,],%*[^,],%29[^,],%d,%lf", name, &amount, &cost)>0)
    {   
        //printf("%d\n",fscanf(fp,"%10[^,],%10[^,],%30[^,],%d,%lf", day, time, name, &amount, &cost));
        int i =0 ;
        while(1)
        {
            if(i==num_items)
            {
                strcpy(stock[i].name,name);
                stock[i].amount=amount;
                stock[i].totalCost=cost;
                num_items++;
                break;
            }
            else if(strstr(stock[i].name,name))
            {
                stock[i].amount+=amount;
                stock[i].totalCost+=cost;
                break;
            }
            i++;
        }
    }
    printStock(stock, nStock); 
    fclose(fp);
}



int main()
{
    char filename[]="stock-log-20170401.txt";
    //scanf("%s", filename);
    reportStock(filename);
}