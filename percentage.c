#include<stdio.h>
#include<conio.h>
int main()
{
	int eng,math,odia,sanskrit,hindi,computer;
	float perc,total_marks;
	printf("enter the mark obtained in english"); scanf("%d",&eng);
	printf("enter the mark obtained in mathmatics"); scanf("%d",&math);
	printf("enter the mark obtained in odia"); scanf("%d",&odia);
	printf("enter the mark obtained in sansktit"); scanf("%d",&sanskrit);
	printf("enter the mark obtined in hindi"); scanf("%d",&hindi);
	printf("enter the mark obtained in computer"); scanf("%d",&computer);
	total_marks=eng+math+odia+sanskrit+hindi+computer;
	printf("total_marks is %f\n",total_marks);
	perc=total_marks/600*100;
	printf("your percentage is %2f",perc);
	return 0;
}
