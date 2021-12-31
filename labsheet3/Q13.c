#include <stdio.h>

void main(){
     int p=0,n=0,z=0,a;
     while(1){
           printf("enter a number :"); 
           scanf("%d",&a);
           if(a==0)
                z++;
            else if(a>0)
                p++;
            else
                n++;  
            char ch;
            printf("Do you wantu continue Y/N? ");
            scanf(" %c",&ch);  
            if(ch=='N'|| ch=='n')
                break;
     }
     printf("The number is %d \n",a);
     printf("The number of zeros :%d\n The number of positive :%d\n The number of negetive :%d",z,p,n); 
}