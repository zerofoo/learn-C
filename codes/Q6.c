#include <stdio.h>
#include <conio.h>
void main()
{

   int a,b,add,sub,mul;
   float div;
   printf("Enter two numbers :");
   scanf("%d%d",&a,&b);
   add=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
    printf("Addition=%d\nSubtraction=%d\nMultiplication=%d\nDivision=%.2f",add,sub,mul,div);
      getch();
}