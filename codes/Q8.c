#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
   float radius, area=0, cir=0;
   printf("Enter radius of a circle :");
   scanf ("%f",&radius);
   area= PI*radius*radius;
   cir=2*PI*radius;
   printf("Area=%3f\tCircumference=%3f",area,cir);
}