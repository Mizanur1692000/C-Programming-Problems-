#include<stdio.h>
int main()
{
  int n,m,i,j;
  printf("Enter the starting number: ");
  scanf("%d",&n);
  printf("Enter the ending nubmer: ");
  scanf("%d",&m);
  printf("Prime numbers between %d to %d are:",n,m);
  for(i=n; i<=m; i++)
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
    }
  }
  return 0;
}