//No.1
/*
#include<stdio.h>
int main()
{
  int n,i,a[100];
  printf("Input the number of elements to store in the array: ");
  scanf("%d",&n);
  printf("The values store into the array are : ");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The values store into the array in reverse are : ");
  for(i=n-1; i>=0; i--)
  {
    printf("%d ",a[i]);
  }
}
*/



//No.2
/*
#include<stdio.h>
int main()
{
  int a[1000],n,i,sum=0;
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d",&n);
  printf("Input %d elements in the array are: ",n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("Sum of all elements stored in the array is: %d",sum);
}
*/
