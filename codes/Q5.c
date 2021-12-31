#include <stdio.h>
#include <conio.h>
void main()
{
    char name [100];
    int age;
    float salary;
    printf("Enter your name :");
    scanf("%s",name);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your salary :");
    scanf("%f",&salary);
    printf("Your salary is %.2f",salary);
    getch();
}