#include<stdio.h>
int main()
{
  int i,num;
  printf("enter a number to check prime number");
  scanf("%d",&num);
  i=2;
  while(i<=num-1);
  {
  	if(num%i==0)
  	{
  		printf("%d this is a prime number",num);
	}
	i++;
  }
  if(i==num)
  printf("it is not a prime number %d",num);
  return 0;
}
