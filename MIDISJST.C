#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr[30],i,n,a,b,temp,arr1[30];
char ch;
clrscr();
printf("\n1.CREATE");
printf("\n2.UNION");
printf("\n3.FIND");
printf("\n4.EXIT");
while(1)
 {
 printf("\nEnter the choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: //create set
 printf("Enter the no. of elements in set:");
 scanf("%d",&n);
 printf("Enter elements in set:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr1[i]);
 arr[i]=i;
 }
 break;

 case 2://UNION:Change all entries from arr[a] to arr[b]
 printf("\nEnter the index of elements (2 indices)which are to be connected(union):\n");
 scanf("%d%d",&a,&b);
 temp=arr[a];
 for(i=0;i<n;i++)
 {
 if(arr[i]==temp)
 arr[i]=arr[b];
 }
 printf("\n Element status_after_union\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t\t%d\n",arr1[i],arr[i]);
 }

 printf("\n Elements have been successfully connected(Union operation)\n");
 break;

 case 3:
 printf("\n Enter the Index of elements(2 indices) whose connection is to be checked(Find operation):\n");
 scanf("%d%d",&a,&b);
 if(arr[a]==arr[b])
 {
 printf("\nElements at indices%d&%d are connected\n",a,b);
 }
 else
 {
 printf("\nElements at indices%d&%d are not connected ")
 }
 break;

 case 4:
 exit(0);
 break;

 default:
 printf("\n Wrong choice, please select a valid choice");
 break;
 }
 }
 }



