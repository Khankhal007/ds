#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;   
};
void insert_end(struct node **head_ref,int new_data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=*head_ref;
    temp->data=new_data;
    temp->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return ;
}
void insert_beg(struct node *head_ref,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head_ref;
    head_ref=temp;
}
void peintlist(struct node *head)
{
    struct node *ptr=NULL;
    if(head==NULL)
         printf("\n list is empty");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head=NULL;
}