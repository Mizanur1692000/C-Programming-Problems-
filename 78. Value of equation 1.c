#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,x,x1,x2;
  printf("a= ");
  scanf("%lf",&a);
  printf("b= ");
  scanf("%lf",&b);
  printf("c= ");
  scanf("%lf",&c);
  x=sqrt(b*b-4*a*c);
  x1=(-b+x)/(2*a);
  x2=(-b-x)/(2*a);
  printf("x1= %.2lf\nx2= %.2lf",x1,x2);
  return 0;
}
