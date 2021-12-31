#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter two number :");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\t b=%d",a,b);
	getch();
}
