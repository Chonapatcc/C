#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int val;
    struct _node *next; 
}Node;

void insert(Node *head,int value)
{
    
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->next= NULL;
    if(head->next==NULL)
    {
        head->val = value;
        head->next = newnode;
    }
    else
    {
        Node *node = head;
        while(node->next!=NULL)
        {
            node = node->next;
        }
        node->val = value;
        node->next = newnode;
    }

}

void delete(Node *head , int value)
{
    Node *node = head;
    
    while(node!=NULL)
    {
        Node *next=node->next;

        if(node->val == value)
        {
            node->val = next->val;
            node->next = next->next;
        }
        if(node->val!=value)
        {
            node = node->next;
        }
        
    }

}

void sort(Node *head)
{
    Node *node = head;

    while(node->next->next!=NULL)
    {
        Node *node2 = node->next;
        while(node2->next!=NULL)
        {
            if(node->val > node2->val)
            {
                int temp= node->val;
                node->val = node2->val;
                node2->val =temp;
            }
            node2=node2->next;
        }
        node=node->next;
    }
}

void print(Node *head)
{

    Node *node = head;
    printf("[ ");
    while(node->next!=NULL)
    {
        printf("%d ",node->val);
        node = node->next;
    }
    printf("]\n");
    
    
}



int main()
{
    char input='x';
    char input2;
    int input3;
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    while(input!='q')
    {
        printf("input> ");
        scanf("%c",&input);
        scanf("%c",&input2);
        if(input2==' ')
        {
            scanf("%d",&input3);
            scanf("%c",&input2);
        }
        if(input=='p')
        {
            print(head);
        }
        else if(input=='i')
        {
            insert(head,input3);
            sort(head);
        }
        else if(input == 'd')
        {
            delete(head,input3);
        }

    }
}