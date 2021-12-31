#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
			printf("The smallest number is :%d",a);
	    	else
		    	printf("The smallest number is :%d",c);
	}
	if(b<c)
		printf("The smallest number is :%d",b);
	else
		printf("The smallest number is :%d",c);
	getch();
}