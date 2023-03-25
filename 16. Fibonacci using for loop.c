#include<stdio.h>
int main()
{
  int n,i,first=0,second=1,fibo=0;
  printf("Enter the range: ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    if(i<=1)
    {
      fibo=i;
    }
    else
    {
      fibo=first+second;
      first=second;
      second=fibo;
    }
    printf("%d ",fibo);
  }
  return 0;
}