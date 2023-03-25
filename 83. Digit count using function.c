#include<stdio.h>
int DigitCount(int a);
void main()
{
    int n,r;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("Total digits: %d", DigitCount(n));
}
int DigitCount(int a)
{
    int r=0;
    while(a!=0)
    {
        a=a/10;
        ++r;
    }
    return r;
}
