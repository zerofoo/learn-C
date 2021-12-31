#include <stdio.h>
#include <conio.h>
void main()
{
        char a;
        double first, second, result;
        printf("Enter an operator :");
        scanf("%c",&a);
        printf("Enter two numbers :");
        scanf("%lf %lf",&first, &second);
        if(a=='+'){
                result=first+second;
                printf("%lf", result);
        }
        else if(a=='-'){
                result=first-second;
                printf("%lf", result);
        }
        else if(a=='/'){
                result=first/second;
                printf("%lf", result);
        }
        else if(a=='*'){
                result=first*second;

                printf("%lf", result);
        }
            
        }
