#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
	printf("The number is even");
	}
	else
	{
	printf("The nunber is odd");
	}
	getch();	
}