#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int s,int no);
void display();
int set1[30],set2[30],s1,s2;
void main()
{
int uni[30],inter[30],diff[30],s,pos,i,no;
char ch;
clrscr();
printf("Enter no. of elements in 1st Set:");
scanf("%d",&s1);
printf("Enter elements in 1st set(only 0s and 1s):");
 for(i=0;i<s1;i++)
 {
 scanf("%d",&set1[i]);
 }
printf("\n Enter no. of elements in 2nd set:");
scanf("%d",&s2);
printf("Enter the elements in 2nd set(only 0s and 1s):");
 for(i=0;i<s2;i++)
 {
 scanf("%d",&set2[i]);
 }
 printf("\n1.ADD");
 printf("\n2.REMOVE");
 printf("\n3.UNION");
 printf("\n4.INTERSECTION");
 printf("\n5.DIFFERENCE");
 printf("\n6.DISPLAY SET1,SET2");
 printf("\n7.EXIT");
 while(1)
 {
 printf("\nEnter Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1://ADD ELEMENTS
 printf("Enter the set into which elements are to be added(1 or 2):");
 scanf("%d",&s);
 printf("Enter data(1 or 0):");
 scanf("%d",&no);
 add(s,no);
 break;

 case 2://REMOVE ELEMENTS
 printf("Enter the set from which elements are to be removed(1 or 2):");
 scanf("%d",&s);
 printf("Enter position from which element is be removed:");
 scanf("%d",&pos);
 if(s==1)
 {
 for(i=pos-1;i<s1-1;i++)
 {
 set1[i]=set1[i+1];
 }
 s1--;
 }
 else if(s==2)
 {
 for(i=pos-1;i<s2-1;i++)
 {
 set2[i]=set2[i+1];
 }
 s2--;
 }
 printf("\nElement removed successfully");
 break;

 case 3://UNION
 if(s1==s2)
 {
 printf("\nElements after Union operation:");
 for(i=0;i<s2;i++)
 {
 uni[i]=set1[i]|set2[i];
 printf("%d\n",uni[i]);
 }
 }
 else
 {
 printf("Set Union operation not possible as sets are of different size\n");
 }
 break;

 case 4://INTERSECTION
 if(s1==s2)
 {
 printf("\nElements after Intersection operation:");
 for(i=0;i<s1;i++)
 {
 inter[i]=set1[i]&set2[i];
 printf("%d\n",inter[i]);
 }
 }
 else
 {
 printf("Set Intersection operation not possible as sets are of different size\n");
 }
 break;

 case 5://DIFFERENCE
 if(s1==s2)
 {
 printf("\nElements after Difference operation:");
 for(i=0;i<s1;i++)
 {
 diff[i]=set1[i]&~set2[i];
 printf("%d\n",diff[i]);
 }
 }
 else
 {
 printf("Set Difference not possible as sets are of different size\n");
 }
 break;

 case 6:
 display();
 break;

 case 7:
 exit(0);
 break;

 default:
 printf("\n Wrong choice, please select a valid choice");
 break;
 }
 }
 getch();
 }

 void add(int s,int no)
 {
 if(s==1)
 {
 set1[s1]=no;
 s1++;
 }
 else if(s==2)
 {
 set2[s2]=no;
 s2++;
 }
 printf("Element added successfully");
 }

 void display()
 {
 int i;
 printf("\nElements in 1st set:");
 for(i=0;i<s1;i++)
 {
 printf("%d\t",set1[i]);
 }
 printf("\nElements in 2nd set:");
 for(i=0;i<s2;i++)
 {
  printf("%d\t",set2[i]);
 }
 }