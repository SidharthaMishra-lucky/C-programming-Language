#include<stdio.h>
int main()
{
	float height,weight;
	printf("enter the height and weight "); scanf("%f%f",&height,&weight);
	if(height>72 && weight<75)
	{
		printf("you are a smart ");
	}
	else
	{
		printf("you are not a smart ");
	}
	return 0;
	
}
