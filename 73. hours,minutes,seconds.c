#include<stdio.h>
main()
{
    int s,h,n,m,s2;
    printf("Enter seconds in integer: ");
    scanf("%d", &s);
    h=s/3600;
    n=s%3600;
    m=n/60;
    s2=n%60;
    printf("%d seconds is %d Hours %d Minutes %d Seconds", s,h,m,s2);
}
