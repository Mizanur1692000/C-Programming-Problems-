#include<stdio.h>
int main()
{
  int de,oc,hex;
  printf("Enter a decimal number: ");
  scanf("%d",&de);
  printf("Octal number is: %o",de);


  printf("\nEnter a Octal number: ");
  scanf("%o",&oc);
  printf("Decimal number is: %d",oc);


  printf("\nEnter a Decimal number: ");
  scanf("%d",&de);
  printf("Hexadecimal number is: %x",de);


  printf("\nEnter a Hexadecimal number: ");
  scanf("%x",&hex);
  printf("Decimal number is: %d",hex);


  printf("\nEnter a octal number: ");
  scanf("%o",&oc);
  printf("Hexadecimal number is: %x",oc);


  printf("\nEnter a Hexadecimal number: ");
  scanf("%x",&hex);
  printf("Octal number is: %o",hex);
}
