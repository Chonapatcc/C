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
    fgets(text, 100, fp);
    int items = atoi(text);
    int num_items=0;
    Product stocks[100]={0};
    
    while (fgets(text,100,fp)!=NULL)
    {
        char t1[100]="";
        char t2[100]="";
        int n1=0,n2=0;
        int ch=2;
        //printf("%s",text);
        for(int i =0 ; i<sizeof(text)/sizeof(text[0]) ; i++)
        {
            if(text[i]>=48 && text[i]<=57 &&ch==1)
            {
                ch=0;
                t1[n1-1]='\0';
            }
            if((text[i]>=65 && text[i]<=90) ||(text[i]>=97 && text[i]<=122))
            {
                ch=1;
            }
            if(ch==1)
            {
                t1[n1++] =text[i];
            }
            else if(ch==0)
            {
                t2[n2++] = text[i];
            }
        }
        //printf("%s %s\n",t1,t2);
        char name[30];
        int amount;
        double cost;
        
        strcpy(name,t1);
        name[20]='\0';
        if(name[0]>=97 && name[0]<=122)
        {
            name[0]-=32;
        }

        char *ptr;
        ptr=strtok(t2,",");
        amount = atoi(ptr);
        ptr=strtok(NULL,",");
        cost= atof(ptr);

        
        //printf("%s|%d|%lf\n" , name,amount,cost);
        for(int i = 0 ; i<items;i++)
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