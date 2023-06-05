#include<stdio.h>
int main()
{
	int A[7]={2,5,7,3,9,19},i,element,count=0;
	printf("enter the element to search");
	scanf("%d",&element);
	for(i=0;i<7;i++)
	{
	  count++;
      if(A[i]==element)
	  break;
	}
	  if(i==7)
	  printf("the searched element is not found",element);
	  else
	  printf("the searched element is found at index %d and count is %d",i,count);
	  return 0;
	  
}