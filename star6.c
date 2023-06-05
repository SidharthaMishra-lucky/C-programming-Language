#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter a number upto which you want to see the structure");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 for(j=0;j<i;j++)
	 {
	 	printf("*");
	 }
    }
	 printf("\n");
	 return 0;
}