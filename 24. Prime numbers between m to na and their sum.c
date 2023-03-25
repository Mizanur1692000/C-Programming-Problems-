#include<stdio.h>
int main()
{
  int m,n,i,j,sum=0;
  printf("Enter the starting number: ");
  scanf("%d",&m);
  printf("Enter the ending number: ");
  scanf("%d",&n);
  printf("Prime numbers are: ");
  for(i=m; i<=n; i++)
  {
    for(j=2; j<=i; j++)
    {
      if(i%j==0)
      {
        break;
      }
    }
    if(i==j)
    {
    printf("\n%d",i);
    sum+=i;
    }
  }
  printf("\nSum of all prime numbers is: %d",sum);
  return 0;
}
