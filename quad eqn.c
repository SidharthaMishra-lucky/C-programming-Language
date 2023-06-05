#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x1,x2,fpart,spart;
	printf("enter the value of a,b,c"); scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;

	if(d==0)
	{
			x1=-b/(2*a);
	        x2=-b/(2*a);
	     printf("the roots are equal and real and they are %f %f ",x1,x2);
    }
	else if(d<0)
	{
	    x1=(-b/2*a)+sqrt(d)/(2*a);
	    x2=(-b/2*a)-sqrt(d)/(2*a);
		printf("the roots are unequal and real and they are: %f %f",x1,x2);	
	}
	
	
    return 0;
}
