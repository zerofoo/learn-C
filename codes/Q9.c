#include <stdio.h>
#include <conio.h>
void main()
{
   float l,b,area=0,peri=0;
   printf("Enter length, breadth of rectangle:");
   scanf("%f%f",&l,&b);
   area=l*b;
   peri=2*(l+b);
   printf("Area=%2f\tPerimeter=%2f",area,peri);
    getch();
}