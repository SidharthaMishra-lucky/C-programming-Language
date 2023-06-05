#include<stdio.h>
int main()
{
	int x=6;
	float y=357.3594;
	printf("%d\n",x);
	printf("%6d %3d\n",x,x);
	printf("%10.2f\n",y);
	printf("%3.2f\n",y);
	printf("15.3\n",y);
	printf("%f\n",y);
	printf("%-7.2f\n",y);
	printf("%-15.3f\n",y);
	return 0;
}
