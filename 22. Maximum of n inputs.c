#include<stdio.h>
int main()
{
  int n,i,max=0,num;
  printf("Enter N inputs: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    scanf("%d",&num);
    if(num>max)
    max=num;
  }
  printf("\nMax= %d",max);
  return 0;
}

