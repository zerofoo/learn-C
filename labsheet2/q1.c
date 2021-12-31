#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a,b,c,d,e,s;
    printf("Enter five-digit number :");
    scanf("%d",&num);
    a=(num/10000)+1;
    num=num%10000;
    b=(num/1000)+1;
    num=num%1000;
    c=(num/100)+1;
    num=num%100;
    d=(num/10)+1;
    num=num%10;
    e=num+1;
    s=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    printf("%d is the new five-digit",s);
    getch();
}