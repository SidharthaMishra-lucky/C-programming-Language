#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	if(x%2==0)
	{
		if(x>0)
			y=1+x/sqrt(1+x*x);
		else
		y=1/sqrt(1-x*x);
	}
	else if (x%2!=0)
	{
		if(x>0)
		y=1-x/sqrt(1+x+x);
		else
		y=1/sqrt(1+x*x);
	}
		else
		   y=0;
	printf("the value of y is %3.2f",y);
	return 0;
}
