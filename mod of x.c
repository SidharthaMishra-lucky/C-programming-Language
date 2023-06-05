#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the value of x");
	scanf("%d",&x);
	if(x>0)
	{
	   y=x*x-10*x+2;	
	   printf("the value of y is %d",y);
	}
	else
	{
		 y=-x;
	      printf("the value of y is %d",y);
	}
		return 0;
}
