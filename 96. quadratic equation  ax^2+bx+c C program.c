#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,d,x1,x2;
  printf("Enter the value of a, b & c: ");
  scanf("%lf %lf %lf",&a,&b,&c);
  d=sqrt(b*b-4*a*c);
  x1=(-b+d)/(2*a);
  x2=(-b-d)/(2*a);
  printf("The roots of the quadratic equation are: %lf and %lf",x1,x2);
  return 0;
}
