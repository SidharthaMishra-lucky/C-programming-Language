//sorting of array
#include<stdio.h>
int main()
{
	int i,n,j,num,arr[10];
	printf("enetr the number of elements in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("enetr the number to be inserted");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(arr[i]>num)
		{
			for(j=n-1;j>=i;j--)
			arr[j+1]=arr[j];
			arr[i]=num;
			break;
		}
	}
	n=n+1;
	printf("the array after insertion is \n ",num);
	for(i=0;i<n;i++)
	printf("\n arr[%d]=%d",i,arr[i]);
	return 0;
}