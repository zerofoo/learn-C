#include <stdio.h>
#include <conio.h>
void main(){
    int i, total=1;
    printf("Enter the number :");
    scanf("%d",&i);
    for(int j=i; j>=1; j--)
        total=total*j;
    printf("The factorial is %d",total);
}