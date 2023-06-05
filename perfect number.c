#include<stdio.h>  
int main()  
{  
 int num, rem, sum = 0, i;  
// take an input from the user.  
  printf("Enter a number\n");  
  scanf("%d", &num);      
// find all divisors and add them  
   for(i = 1; i < num; i++)  
    {  
       rem = num % i;  
       if (rem == 0)  
        {  
          sum = sum + i;  
        }  
    }  
    if(sum == num)  
    printf(" this is a Perfect Number %d",sum);  
    else  
    printf("this is not a Perfect Number %d",sum);  
    return 0;  
}