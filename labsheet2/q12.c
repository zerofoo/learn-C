#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
if(num%5==0)
       printf("The number is divisible by 5 and not by 11");
else
printf("The number is divisible by 5 and 11");
getch();	
}