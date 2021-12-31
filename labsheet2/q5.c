#include<stdio.h>
#include<conio.h>
int main()
{
    float com,sales;
    printf("Enter sales amount:");
    scanf("%f",&sales);
    if(sales<=5000)
    {
        com=0.01*sales;
        printf("Commission is =%f",com);
    }
    else if(sales >5000&& sales<=8000)
    {
        com=0.03*sales;
        printf("Commission is =%f",com);
    }
    else if(sales >8000&& sales<=11000)
    {
        com=0.05*sales;
        printf("Commission is =%f",com);
    }
    else
    {
     com=0.10*sales;
     printf("Commission is=%f",com);
    }
    getch();
}