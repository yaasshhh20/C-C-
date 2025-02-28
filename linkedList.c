#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * getnode(int e)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=e;
    p->next=0;
    return p;
}
void insertFront(struct node ** head,int e)
{
    struct node *p;
    p=getnode(e);
    if((*head)==NULL)//check if list is empty
    {
        (*head)=p;
        return;
    }
    p->next=*head;
    (*head)=p;
    return;
}
void insertRear(struct node ** head,int e)
{
    struct node *p,*q;
    p=getnode(e);
    if((*head)==NULL)//check if list is empty
    {
        (*head)=p;
        return;
    }
    q=(*head);
    while(q->next!=NULL)//to locate the last node
        q=q->next;
    q->next=p;
}
void insertLeft(struct node **head, int key,int e)
{
    struct node* p,*q,*k;
    p=getnode(key);
    if(*head==NULL)//if list is empty
    {
        printf("Sorry! List is empty...");
        return;
    }

    //check if the head node has key value
    if(*head!=NULL && (*head)->data==key)
    {
        insertFront(head,e);
        return;
    }
    q=(*head);
    k=NULL;
    while(q!=NULL && q->data!=key)
    {
        k=q;
        q=q->next;
    }
    if(q==NULL)
    {
        printf("\nElement not found...");
        return;
    }
    else
    {
        k->next=p;
        p->next=q;
    }
}
void displayList(struct node *head)
{

    if(head==NULL)
        printf("Sorry! List is empty.");
    else{
            printf("\nContents of list are: \n");
        while(head!=NULL)
        {
            printf("%d->",head->data);
            head=head->next;
        }
        printf("NULL");
    }
}
void insertRight(struct node **head, int key,int e)
{
    struct node *p,*q;
    p=getnode(e);
    q=(*head);
    if(q==NULL)
    {
        printf("List empty");
        return;
    }
    while(q!=NULL && q->data!=key)
            q=q->next;
    if(q==NULL)
        printf("Element not found");
    else{
        p->next=q->next;
        q->next=p;
    }
}
int main()
{
    struct node *head;
    head=NULL;
    head=getnode(10);
    insertFront(&head,20);
    insertFront(&head,30);
    displayList(head);
    insertRear(&head,40);
    displayList(head);
    insertLeft(&head,40,35);
    displayList(head);
    return 0;
}