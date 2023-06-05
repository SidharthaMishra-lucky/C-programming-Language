#include<stdio.h>
int main()
{
	float x,sum=0,term;
	int i,n;
	printf("enter the value of x and n");
	scanf("%f%d",&x,&n);
	term=x;
	sum=term;
	for(i=2;i<=n;i++)
	{
		term=(-1)*x*x*term/(2*i-1)*(2*i-2);
		sum=sum+term;
	}
	printf("the result is %3.2f",sum);
	return 0;
}