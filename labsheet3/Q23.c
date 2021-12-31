#include <stdio.h>

void main(){
    int a,b,c=1;
    printf("enter two number : ");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=b; i++){
        c=c*a;
    }
     printf("the %d ",c);
}