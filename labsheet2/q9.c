#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,g;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    g =(a>b)? a:b;
    printf("greatest=%d",g);
    getch();

}