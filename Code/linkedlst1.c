#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next ;
}Node;
int main()
{
    Node *first =(Node *)malloc(sizeof(Node));
    Node *second=(Node *)malloc(sizeof(Node));

    first->data =1 ;
    first->next = second;
    second->data=2;
    printf("%d",first->next->data);
}