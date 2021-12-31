#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	printf("Enter temperature in centigrade :");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Temperature in Fahrenheit=%.2f",f);
	getch();
}