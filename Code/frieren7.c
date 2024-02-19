#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType 
{
  int   item;
  struct nodeType* next;
} Node;


void print(Node *list[])
{
    for(int i =0 ; i<SIZE ;i++)
    {
        printf("KEY %2d:",i);
        Node *node = list[i];
        while(node->next !=NULL)
        {
            printf(" %d",node->item);
            node=node->next;

        }

        printf("\n");
    }
}
void memory(Node * list[])
{
    for(int i =0 ; i<SIZE ; i++)
    {
        list[i] = (Node*)malloc(sizeof(Node));
        list[i]->next = NULL;
    }
}

void add(Node *list[],int value)
{
    int index = value%SIZE;
    Node *node = list[index];
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->next= node;
    newnode->item = value;
    list[index] = newnode;
}


int main()
{
    Node* list[SIZE];
    memory(list);
    char input1;
    char input2;
    int input3;

    while(1)
    {
        printf("input> ");
        scanf("%c%c",&input1,&input2);
        if(input2==' ')
        {
            scanf("%d%c",&input3,&input2);
        }

        if(input1=='q')
        {
            break;
        }
        else if(input1=='p')
        {   
            print(list);
        }
        else if(input1=='a')
        {
            add(list,input3);
        }

    
    }
    
}

