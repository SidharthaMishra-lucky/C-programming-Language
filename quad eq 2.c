#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,x,x1,x2,fpart,spart;
printf("enter the value of a,b,c");
scanf("%f%f%f", &a, &b, &c);
d = b*b-4*a*c;
if (d==0)
printf("the roots are equal & real and they are %3.2f %7.2f", -b/2*a, -b/2*a);
else if(d>0)
{
  x1 = -b/2*a + sqrt(d)/(2*a);
  x2 = -b/2*a - sqrt(d)/(2*a);
  printf(" the roots are unreal and real and they are : %3.2f, %7.2f", x1,x2);
}
  else 
{
fpart = -b/(2*a);
spart= sqrt(-d)/(2*a);
printf("the roots are unequal and imaginary and they are : %3.2f + i 3.2f , %3.2f - i  %3.2f", fpart, spart, fpart, spart);

}
return 0;
}