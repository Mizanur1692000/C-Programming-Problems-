#include<stdio.h>
int Odd_sum(int a, int b, int i, int odd_sum);
int main()
{
  int a,b,i,odd_sum=0;
  printf("Enter the first number of range: ");
  scanf("%d",&a);
  printf("Enter the last number of range: ");
  scanf("%d",&b);
  odd_sum=Odd_sum(a,b,i,odd_sum);
  printf("%d",odd_sum);
}

int Odd_sum(int a, int b, int i, int odd_sum)
{
  for(i=a; i<=b; i++)
  {
  if(i%2!=0)
  {
    odd_sum=odd_sum+i;
  }
  }
  return odd_sum;
}