#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter a value which you want to see the structure");
	scanf("%d",&n);
	for(i=n;i<=n-1;i--)
	{
		for(j=1;j<=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
}