#include <stdio.h>
#include <stdlib.h>

struct __Node
{
    int value;
    struct __Node *prev;
    struct __Node *next;
};

typedef struct __Node node;




void printList(node *pList) 
{
    for(int i =0 ; i<10 ;i++)
    {
        printf("%d ",pList->value);
        pList=pList->next;
        printf("cat\n");
    }
}

void insertNode(node **head,int val,int index) 
{
    
    node *newNode = (node *) malloc (sizeof (node));

    newNode->value = val;
    newNode->next = NULL;


    //need this if there is no node present in linked list at all
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    node *temp = *head; // #######

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) 
    {
        scanf(" %d", &value);
        insertNode(&pList,value,i);

    }

    printList(pList);

  
}