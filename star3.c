#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter a value which you want to see the structure");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}