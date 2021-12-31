#include<stdio.h>
#include<conio.h>
void main()
{
	int mm,km,m,cm;
   printf("Enter length in millimeter :");
   scanf("%d",&mm);
   km=mm/1000000;
   mm=mm%1000000;
   m=mm/1000;
   mm=mm%1000;
   cm=mm/10;
   mm=mm%10;
   printf("%dkm\t%dm\t%dcm\tmm",km,m,cm,mm);
   getch();
}