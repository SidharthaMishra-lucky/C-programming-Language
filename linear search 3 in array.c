#include<stdio.h>
int main()
{
	int A[20],no,i,element,count=0;
	printf("enter the size of array");
	scanf("%d",&no);
	printf("enter the elementas in array");
	for(i=0;i<no;i++)
	scanf("%d",&A[i]);
	printf("enter the element to search");
	scanf("%d",&element);
	for(i=0;i<no;i++)
	{
	  count++;
      if(A[i]==element)
	  break;
	}
	  if(i==no)
	  printf("the searched element is not found",element);
	  else
	  printf("the searched element is found at index %d and count is %d",i,count);
	  return 0;
	  
}