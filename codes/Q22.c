#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,s,area,d;
	printf("Enter three sides of triangle :");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	d=s*(s-a)*(s-b)*(s-c);
	area=sqrt(d);
	printf("area=%d",area);
	getch();
}

