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
    FILE *fp = fopen(filename, "w");
    char text[]="4\n20170402,12:54:00,T Shirt L,1,120.00\n20170401,12:56:32,Boxer,2,90.00\n20170401,13:12:34,T Shirt L,2,200.00\n20170401,13:12:34,Boxer,2,98.00\n20170401,14:29:17,T Shirt M,4,480.00\n20170401,16:39:27,Shorts M,1,120.50\n20170401,17:12:34,T Shirt L,3,350.00";
    fwrite(text , 1 , sizeof(text) , fp );



}


int main()
{
    char filename[]="stock-log-20170401.txt";
    //scanf("%s", filename);
    reportStock(filename);
}