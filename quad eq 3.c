//Using switch case find the value of y

#include<stdio.h>
int main()
{float x, y;
int t;
printf("enter the value X");
scanf("%f", &x);
if(x<-1)
t=1;
else if(x>=-1 && x<=1)
t=2;
else
t=3;
switch(t)
{
case 1:
 y= x*x+5*x+2;
 break;
case 2:
y = x+5;
break;
case 3:
y=5;
}
printf("the value of y is = %3.2f", y);
return 0;
}