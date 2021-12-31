#include<stdio.h>
#include<conio.h>
void main()
{
	int d,y,m;
 
   printf("Enter number of days :");
   scanf("%d",&d);
   y=d/365;
   d=d%365;
   m=d/30;
   d=d%30;
   printf("%dYears\t%dMonths\t%dDays",y,m,d);
   getch();
}