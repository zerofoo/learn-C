#include <stdio.h>
#include <conio.h>
void main()
{
    float side, sa=0;
    printf("Enter side of a cube :");
    scanf("%f",&side);
    sa= 6*side*side;
    printf("Surface Area = %f",sa);
    getch();
}