#include<stdio.h>
int main()
{
	int no,rem,sum=0,temp;
	printf("enter the value to check whether the number is palindrome no or not");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
		rem=no%10;
		sum=(sum*10)+rem;
		no=no/10;
	}
	if(temp==sum)
	{
		printf("this is a palindrome no %d",temp);
	}
	else
	{
		printf("this is not a palindrome no %d",temp);
	}
	return 0;
}