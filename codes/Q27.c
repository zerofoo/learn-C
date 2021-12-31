#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s=0,r;
	printf("Enter four digit number :");
   scanf("%d",&a);
   r=a%10;
   s=s+r;
   a=a/1000;
   s=s+a;
   printf("Sum of first and last digit is=%d",s);
   getch();
}