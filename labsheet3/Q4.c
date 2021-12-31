#include <stdio.h>
void main()
{
   int i,n;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   for(i=1; i<n; i++){
     printf("%d/%d, ",i,i+1);
     
   }

}
