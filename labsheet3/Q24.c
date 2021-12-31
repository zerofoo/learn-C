#include <stdio.h>
void main(){
    int i;
    printf("The odd numbers between 1-20 are : \n");
    for(i=1; i<=20 ;i++){
        if(i%2!=0)
            printf("%d\n",i);
    }
}