#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,p,heater,toaster,fan,tax,total;
	printf("The number of heater:");
	scanf("%d",&n);
	printf("The number of Toaster:");
	scanf("%d",&m);
	printf("The number of fan:");
	scanf("%d",&p);
	heater=(n*1500)-5/100*(n*1500);
	toaster=(m*200)-15/100*(n*200);
	fan=(p*400)-10/100*(n*400);
	tax=(heater+toaster+fan)*10/100;
	total=heater+toaster+fan+tax;
	printf("The number of heater is :%d\n",n);
	printf("The number of toaster is :%d\n",m);
	printf("The number of fan is :%d\n",p);
	printf("Total amount to be paid is : %d",total);
	getch();
}