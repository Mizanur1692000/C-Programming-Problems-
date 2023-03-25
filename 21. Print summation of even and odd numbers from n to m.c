//Print 1 to 100 using loop
/*
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
*/
//Print even and odd numbers from 1 to 100
/*
#include<stdio.h>
int main()
{
  int a,b,i;
  printf("Starting number: ");
  scanf("%d",&a);
  printf("Ending number: ");
  scanf("%d",&b);
  {
    printf("Odd:\n");
  for(i=a; i<=b; i++)
  {
    if(i%2!=0)
      printf("%d\n",i);
  }
  printf("Even:\n");
   for(i=a; i<=b; i++)
  {
    if(i%2==0)
      printf("%d\n",i);
  }
  }
  return 0;
}
*/


//Print summation of even and odd numbers from 1 to 100
/*
#include<stdio.h>
int main()
{
int a,b,i,s1=0,s2=0;
printf("Starting number: ");
scanf("%d",&a);
printf("Ending number: ");
scanf("%d",&b);
{
for(i=a; i<=b; i++)
{
  if(i%2!=0)
  {
    s1=s1+i;
  }
}
 printf("Summation of odd numbers: %d\n",s1);
 for(i=a; i<=b; i++)
{
  if(i%2==0)
  {
    s2=s2+i;
  }
}
 printf("Summation of even numbers: %d",s2);
}
}
*/


//Print N inputs from user and find even and odd sum of N inputs
/*
#include<stdio.h>
int main()
{
  int i,j,n,oddsum=0,evensum=0;
  printf("Enter n inputs: ");
  scanf("%d",&n);
  {
  for(j=1; j<=n; j++)
  {
    scanf("%d",&i);
    {
     if(i%2!=0)
     {
       oddsum=oddsum+i;
     }
     if(i%2==0)
     {
       evensum=evensum+i;
     }
     
    }
    
  }
    printf("Odd sum= %d\n",oddsum);
    printf("Even sum= %d",evensum);
 }
  return 0;
}
*/