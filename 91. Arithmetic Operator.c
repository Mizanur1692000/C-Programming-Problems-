#include<stdio.h>
int main()
{
  int n1,n2,sum,sub,mul;
  float avg,div,mod;
  printf("Enter two integer number: ");
  scanf("%d %d",&n1,&n2);
  sum=n1+n2;
  sub=n1-n2;
  mul=n1*n2;
  div=n1/n2;
  mod=n1%n2;
  printf("Sum is: %d\nSub is: %d\nMul is: %d\nDiv is: %.2f\nMod is: %.2f\n",sum,sub,mul,div,mod);

  avg=(float)sum/2;//type casting
  printf("Average is: %.3f",avg);




}
