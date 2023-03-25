#include<stdio.h>
int main()
{
  int a,b,i;
  printf("Starting number: ");
  scanf("%d",&a);
  printf("Ending number: ");
  scanf("%d",&b);
  for(i=a; i<=b; i++)
  {
    printf("%d ",i);
  }
  return 0;
}
