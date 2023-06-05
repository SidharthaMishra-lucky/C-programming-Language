#include<stdio.h>
int main()
{
	int i,sn,n,element;
	int arry[20];
	printf("enter the number of the element you want to insert in the array\n");
	scanf("%d",n);
	printf("enter %d element in the array\n",n);
	scanf("%d",&element);
	for(i=0;i<n;i++){
	scanf("%d",arry[i]);
}

	for(i=0;i<n;i++){
		if(arry[i]==element){
			printf("%d is present in the array",element);
		}
		else{
			printf("%d is not present in the array",element);
		}
	}
	return 0;
	
}