/*
#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Enter the value of a: \n");
  scanf("%d",&a);
  printf("Enter the value of b: \n");
  scanf("%d",&b);
  printf("Enter the value of c: \n");
  scanf("%d",&c);
  sum=a+b+c;
  printf("Sum of %d, %d and %d is: %d",a,b,c,sum);
  return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  float a,b,c,sum;
  printf("Enter three inputs: ");
  scanf("%f %f %f",&a,&b,&c);
  sum=a+b+c;
  //printf("Sum of three number is: %.3f",a+b+c);
  printf("Sum of three numbers is: %.2f",sum);
  return 0;
}
*/
#include<stdio.h>
int main()
{
  int a;
  float b;
  double sum;
  printf("Enter a int number: ");
  scanf("%d",&a);
  printf("Enter a float number: ");
  scanf("%f",&b);
  sum=a+b;
  printf("Sum of int and float is: %.3lf",sum);
  return 0;
}
