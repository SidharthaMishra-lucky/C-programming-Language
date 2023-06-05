#include<stdio.h>
int main()
{
	int no,freq[10]={0,0,0,0,0,0,0,0,0,0},i,rem;
	printf("enter a number");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		freq[rem]=freq[rem]+1;
		no/10;
	}
	for(i=0;i<10;i++)
	{
			printf("frequency of %d is %d \n",i,freq[i]);
	}
    return 0;
}