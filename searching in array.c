#include<stdio.h>
int main()
{
int A[10],i,element;
printf("enter 10 elements of the array");
for(i=0;i<10;i++)
scanf("%d",&A[i]);
printf("enter the element you want to search");
scanf("%d",&element);
//search the element
for(i=0;i<=10;i++)
{
	if(A[i]==element)
	break;
}
if(i==10)
printf("the searched element is %d is not found",element);
else
printf("the searched element is found at index %d",i);
return 0;
}