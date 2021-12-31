#include <stdio.h>
long factorial(int c){
        if(c==0)
            return 1;
        else
            return(c*factorial(c-1));
    }
    
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("the factorial of %d is %ld",a,factorial(a));

}
