#include<stdio.h>
int main()
{
	int i;
	printf("enter a month to know the season"); scanf("%d",&i);
	switch(i)
	{
		case 11:
		case 12:
		case 1:
		case 2:	
			printf("it is winter season");
			break;
		case 3:
		case 4:
		case 5:
		case 6:	
			printf("it is summer season");
			break;
		case 7:
		case 8:
		case 9:
		case 10:	
			printf("it is  rainy season");
			break;
		default:
		    printf("you have entered a default value");	
	}
	return 0;
}
