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
    FILE *fp = fopen(filename, "r");

    char text[100]="";
    char temp[100]="";
   
    int items ;
    fscanf(fp,"%d\n",&items);
    int num_items=0;
    Product stocks[100];
    for(int i =0 ; i<items ;i++)
    {
        Product *sto0 = (Product *)malloc(sizeof(Product)); 
        stocks[i] = *sto0; 
    }
    
    char day[10], time[10], name[30];
    int amount;
    double cost;
    while (fgets(text,100,fp)!=NULL)
    {
        //printf("%s",text);
        sscanf(text, "%10[^,],%10[^,],%30[^,],%d,%lf\n", day, time, name, &amount, &cost);
        
        if(!strstr(day,"20170401"))
        {
            continue;
        }

        //printf("%s|%d|%lf\n" , name,amount,cost);
        for(int i = 0 ; i<100;i++)
        {

            if(i==num_items)
            {
                strcpy(stocks[i].name,name);
                stocks[i].amount=amount;
                stocks[i].totalCost=cost;
                num_items++;
                break;
            }
            else if(strstr(stocks[i].name,name))
            {
                stocks[i].amount+=amount;
                stocks[i].totalCost+=cost;
                break;
            }
        }

    }

    printStock(stocks, items);
    fclose(fp);

}


int main()
{
    char filename[]="stock-log-20170401.txt";
    //scanf("%s", filename);
    reportStock(filename);
}