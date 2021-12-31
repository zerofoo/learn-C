#include <stdio.h>
void main(){
    int i,j;
    printf("The pattern is :\n");
    for (i=4; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}