#include<stdio.h>  
int main()  
{  
 int num, rem, sum = 0, i,j;   
   for(i=1;i<50;i++)
   {  
     for(j = i; j < num; j++)  
      {  
        rem = num % j;  
        if (rem == 0)  
         {  
          sum = sum + j;  
         }  
       }
    }
    if(sum == num)  
    printf(" this is a Perfect Number %d",sum);  
    else  
    printf("this is not a Perfect Number %d",sum);  
    return 0;  
}