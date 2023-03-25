#include<stdio.h>
int main()
{
  int n,m,i,j,even_sum=0,odd_sum=0;
  printf("Enter N inputs: ");
  scanf("%d",&n);
  printf("The numbers are: ");
  for(i=1; i<=n; i++)
  {
    scanf("%d",&m);
    {
    if(m%2==0)
    even_sum=even_sum+m;
    else
    odd_sum=odd_sum+m;
    }
  }
  printf("Even sum=%d",even_sum);
  printf("\nOdd sum=%d",odd_sum);
  return 0;
}