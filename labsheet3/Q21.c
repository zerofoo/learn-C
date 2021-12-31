#include <stdio.h>
void main(){
    int cube,square;
    for(int i=1; i<=20 ; i++){
        if(i%2==0){
            cube=i*i*i;
            printf("The cube of %d is %d\n",i,cube);}
            else{
                square= i*i;
                printf("The square of %d is %d\n",i,square);

            }
    }
}