#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int queue[SIZE];
int front=-1;
int rear=-1;
 void enqueue();
 void dequeue();
 void display();

 void main()
 {
  int i,choice;
  clrscr();
  while(1)
  {
printf("\n1.Enqueue-Insert \n2.Dequeue-Delete \n3.Display\n 4.Exit");
printf("\nEnter the choice:");
scanf("%d",&choice);

switch(choice)
 {
 case 1:
 printf("Enqueue-Insertion Operation\n");
 enqueue();
 break;

 case 2:
 printf("Dequeue-Deletion Operation\n");
 dequeue();
 break;

 case 3:
 printf("Display operation\n");
 display();
 break;

 case 4:
 exit(0);

 default:
 printf("INVALID CHOICE\n");
 }
 }
 }

 void enqueue()
 {
 if((rear+1)%SIZE==front)
 {
  printf("Queue overflow\n");
 }
 else
 {
 if(front==-1 && rear==-1)
 {
 front=rear=0;
 }
 else if(rear>SIZE-1 && front!=0)
 {
 rear=0;
 }
 else
 {
 rear=(rear+1)%SIZE;
 }

  printf("Enter the elements:");
  scanf("%d",&queue[rear]);
  }
  }
   void dequeue()
   {
   if((front==-1)&&(rear==-1))
   {
   printf("Queue underflow\n");
   }
   else if(front==rear)
   {
   printf("The Dequeue element is %d",queue[front]);
   front=-1;
   rear=-1;
   }
   else
   {
   printf("\n The dequeued element is %d",queue[front]);
   front=(front+1)%SIZE;
   }
   }

 void display()
 {
 int i=front;
 if(front==-1 && rear==-1)
 {
 printf("Queue is empty\n");
 }
 else
 {
 printf("\n Elements in a queue are:");
 while(i!=rear)
 {
 printf("%d\t",queue[i]);
 i=(i+1)%SIZE;
 }
 printf("%d\t",queue[rear]);
 }
 }