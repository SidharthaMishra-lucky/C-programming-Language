#include<stdio.h>
int main()
{
	int no,i,sum=0,rem;
	printf("enter a 3 digit number");
	scanf("%d",&no);
	for(i=1;i<=3;i++)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("the sum of digit of the given number is %d",sum);
	return 0;
}