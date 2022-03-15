#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;   
};
void head_count(struct node *head)
{
    int cnt=0;
    if(head==NULL)
        printf("\n list is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n list is count : %d",cnt);
}
int main()
{
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=22;
    head->next=NULL;

    struct node *current=NULL;
    current=(struct node *)malloc(sizeof(struct node));
    current->data=33;
    current->next=NULL;
    head->next=current;

    printf("%d\t",head->data);
    current=(struct node *)malloc(sizeof(struct node));
    current->data=11;
    current->next=NULL;
    head->next->next=current;

    head_count(head);
}