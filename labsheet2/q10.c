#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4==0)
	printf("It is leap year");
	else
		printf("It is not leap year");
	getch();
}