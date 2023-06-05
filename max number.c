#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two positive number a,b"); scanf("%d %d",&a,&b);
	if(a>b) 
	{
		printf("a is the max number %d",a);
	}
	else
	{
		printf("b is the max number %d",b);
	}
	return 0;
}
