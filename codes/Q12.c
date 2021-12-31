#include<stdio.h>
#include<conio.h>
void main()
{
	int s,h,m;
   printf("Enter seconds :");
   scanf("%d",&s);
   h=s/3600;
   s=s%3600;
   m=s/60;
   s=s%60;
   printf("%dHours\t%dMinutes\t%dSeconds",h,m,s);
   getch();
}