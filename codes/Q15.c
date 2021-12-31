#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,rev=0;
   printf("Enter two digit number :");
   scanf("%d",&a);
   r=a%10;
   a=a/10;
   rev=(r*10)+a;
   printf("Reverse=%d",rev);
   getch();
}