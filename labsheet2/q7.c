#include<stdio.h>
#include<conio.h>
int main()
{
	float sp,cp,profit,loss;
	printf("Enter the cost price:");
	scanf("%f",&cp);
	printf("Enter the selling price:");
	scanf("%f",&sp);
	if(sp>cp)
	{
		printf("He made a profit\n");
		profit=sp-cp;
		printf("His profit is=%.2f\n",profit);
	}
	else if (cp>sp)
	{
		printf("He incurred loss\n");
		loss=cp-sp;
		printf("His loss is =%.2f\n",loss);
	}
	else
	{
		printf("He neither made a profit nor incurred loss");
	}
	getch();
}