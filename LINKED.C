#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
void main()
{
struct node *head=NULL;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
struct node *temp;
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));
one->data=1;
two->data=2;
three->data=3;
one->next=two;
two->next=three;
three->next=NULL;
head=one;
temp=head;
printf("\n list element are\n");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
getch();
}
