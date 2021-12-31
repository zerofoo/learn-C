#include <stdio.h>
#include <stdlib.h>

long factorial(int c){
        if(c==0)
            return 1;
        else
            return(c*factorial(c-1));
    }
    
void prime(int num,int flag,int i, int n){
    printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        flag=1;
                        break;
                    }
                }

                if(num==1)
                    printf("\n1 is neither prime nor composite");
                else
                {
                        if(flag==0)
                            printf("\n%d is Prime Number.\n\n", n);
                        else
                            printf("\n%d is not a Prime Number.\n\n", n);
                }
}
void oddEven(int num, int n) {
    printf("Enter an integer :");
    scanf("%d",&num);
    n=num;
    if(num%2==0){
        printf("%d is even number\n",n);
    
    }
    else
        printf("%d is odd number\n",n);
}

int main()
{
    int c=0, num, res, n, b, flag=0, i;
    while(c!=4)
    {
        printf("\n\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");

        printf("\nEnter your choice:");
        scanf("%d", &c);


        switch(c)
        {
            case 1:

                printf("\nEnter the number :");
                scanf("%d",&b);
                printf("\nThe factorial of %d is %ld :", b,factorial(b));
                break;

            case 2:


                prime(num,flag,i,n);
                break;

            case 3:

                oddEven(num,n);

                break;

            case 4:
            exit(0);
                break;
        }
    }
}
