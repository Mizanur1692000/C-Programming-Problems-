/*with library function
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int base,power,result;
  printf("Enter the base: ");
  scanf("%d",&base);
  printf("Enter the power: ");
  scanf("%d",&power);
  result=pow(base,power);
  printf("The value is: %d",result);
  return 0;
}
*/
//without library function
#include<stdio.h>
int main()
{
  int base,power,result=1;
  printf("Enter the base: ");
  scanf("%d",&base);
  printf("Enter the power: ");
  scanf("%d",&power);
  for(int i=1; i<=power; i++)
  {
    result=result*base;
  }
  printf("Result is: %d",result);
  return 0;
}
