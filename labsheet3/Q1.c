#include <stdio.h>
#include <conio.h>
void main()
{
    int a=0, b=1, num, temp=a+b;
    printf("enter number of terms :");
    scanf("%d",&num);
    for (int i=3; i<num; i++)
        {
            printf("%d, ",temp);
            a=b; 
            b=temp;
            temp= a+b;
            
        } 

}