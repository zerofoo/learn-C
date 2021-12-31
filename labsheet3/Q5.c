#include <stdio.h>
#include <conio.h>
int main()
{  
    int num, count = 1, r, sum;  
    while(count <= 500)  
    {  
        num = count;  
        sum = 0;  
        while(num)  
        {  
            r = num % 10;  
            sum = sum + (r*r*r);  
            num = num / 10;  
        }  
        if(count == sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
        count++;  
    }  
     return 0;  
}  