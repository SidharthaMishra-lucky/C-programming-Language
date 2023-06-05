#include<stdio.h>
int main()
{
	int i,no,count=0;
	printf("enter a number to check either its aprime number or not:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(no%1==0)
		count++;
    }
       if(count<=2)
     	printf("%d this is a prime number",no);
	   else
	    printf("%d this is not a prime number",no);
	return 0;
}