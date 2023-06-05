#include<stdio.h>
#include<conio.h>
int main()
{
	int p,t,r,si;
	printf("enter the principal amount");scanf("%d",&p);
	printf("enter the time required");scanf("%d",&t);
	printf("enter rate of interest");scanf("%d",&r);
	si=p*t*r/100;
	printf("simple interest is %d",si);
	return 0;
}
