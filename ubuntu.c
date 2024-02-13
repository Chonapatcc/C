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
    while(pList!=NULL)
    {
        printf("%d ",pList->value);
        pList=pList->next;

    }
}

void insertNode(node **pList,int val) 
{
    //create new node
    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = val;
    newnode ->next = NULL;

    // if first node ==NULL;
    if (*pList==NULL)
    {
        *pList = newnode ; 
        return;
        
    }

    // insert start;
    if(val<(*pList)->value)
    {
        newnode->next = *pList;
        (*pList)->prev = newnode;

        *pList = newnode;
        return ; 
    }

    node *temp = *pList;

    //insert mid and last;
    while(1)
    {
        
        if (val< temp->value)  //insert;
        {
            newnode->next = temp;
            newnode->prev = temp->prev;

            temp->prev->next= newnode;
            temp->prev = newnode;
            return ;
        }
        else if(temp->next == NULL) //add
        {
            temp->next = newnode;
            newnode->prev = temp;
            return ;
        }
        else
        {
            temp = temp->next;
        }
    }
    

}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) 
    {
        scanf(" %d", &value);
        insertNode(&pList,value);

    }

    printList(pList);

  
}