#include <stdio.h>
#include <conio.h>
void main()
{
   int a,b,q=0,r=0;
   printf("Enter two integer :");
   scanf("%d%d",&a,&b);
   q=a/b;
   r=a%b;
   printf("Quotent=%d\tRemainder=%d",q,r);
    getch();
}