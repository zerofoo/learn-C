#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,ag;
	float per;
	printf("Enter marks in 5 subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	ag=(a+b+c+d+e);
	per=(a+b+c+d+e)/5;
	printf("Aggregate Marks=%d\tPercentage=%.2f",ag,per);
	getch();
}