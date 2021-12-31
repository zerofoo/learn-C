#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b,area,perimeter;
	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter breadth:");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The area of a rectangle is: %.2f\n",area);
	printf("The perimeter of a rectangle is:%.2f\n",perimeter);
	if(area>perimeter)
	{
		printf("The area is greater than perimeter");
	}
	else
	{
		printf("The area is not greater than perimeter");
	}
	getch();
}