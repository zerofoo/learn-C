#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s=0,r;
	printf("Enter Five digit number :");
   scanf("%d",&a);
   r=a%10;
   s=s+r;
   a=a/10;
   r=a%10;
   s=s+r;
   a=a/10;
   r=a%10;
   s=s+r;
   a=a/10;
   r=a%10;
   s=s+r;
   a=a/10;
   r=a%10;
   s=s+r;
   a=a/10;
   printf("sum=%d",s);
   getch();
}
