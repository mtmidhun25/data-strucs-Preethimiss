#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int ch;
clrscr();

while(1)
{
printf("Enter the day:");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Day is MONDAY\n");
break;

case 2:
printf("Day is TUESDAY\n");
break;

case 3:
printf("Day is WEDNESDAY\n");
break;

case 4:
printf("Day is THURSDAY\n");
break;

case 5:
printf("Day is FRIDAY\n");
break;

case 6:
printf("Day is SATURDAY\n");
break;

case 7:
printf("Day is SUNDAY\n");
break;

case 8:
printf("CODE EXIT");
exit(0);

default:
printf("Wrong day number\n");
break;
}
}
}
