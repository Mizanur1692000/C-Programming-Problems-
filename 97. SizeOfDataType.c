#include<stdio.h>
int main()
{
  int i;
  float f;
  double d;
  char c;
  printf("Size of integer is: %lu\n",sizeof(i));
  printf("Size of float is: %lu\n",sizeof(f));
  printf("Size of double is: %lu\n",sizeof(d));
  printf("Size of char is: %lu\n",sizeof(c));
  return 0;
}
