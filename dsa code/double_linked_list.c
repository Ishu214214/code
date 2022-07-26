#include<stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *back;
}node;
node *start;

void insertstart(int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    ptr->next=NULL;
    ptr->back=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        ptr->next=start;
        start->back=ptr;
    }
}

void insertatend(int item)
{
     node *ptr,*pos;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    ptr->next=NULL;
    ptr->back=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        pos=start;
        while(pos!=NULL)
        {
            pos=pos->next;
        }
        pos->next=ptr;
        ptr->back=pos;
    }
}

void insert_before(int item,int value)
{
    node *pos  ,*ptr;
    int f=0;
     ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    ptr->next=NULL;
    ptr->back=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
         pos=start;
         while(pos->item!=value)
         {
             pos=pos->next;
         }
         if(pos==value)
         {
             f=1;
         }
         else
         {
             if(f==1)
             {
              ptr->next=pos;
              ptr->back=pos->back;
              pos->back->next=ptr;
              pos->back=ptr;
             }
             else
             {
                 printf("\n element not found");
             }
         }

    }
}
void insert_after(int item,int value)
{
    node *pos  ,*ptr;
    int f=0;
     ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    ptr->next=NULL;
    ptr->back=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
         pos=start;
         while(pos->item!=value)
         {
             pos=pos->next;
         }
         if(pos==value)
         {
             f=1;
         }
         else
         {
             if(f==1)
             {
             ptr->next=pos->next;
             ptr->back=pos;
             pos->next->back=ptr;
             pos->next=ptr; 
             
             }
             else
             {
                 printf("\n element not found");
             }
         }

    }
}
