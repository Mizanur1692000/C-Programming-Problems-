#include<stdio.h>
#include<math.h>
main()
{
    int v,t,d;
    printf("Insert the velocity in meter/second: ");
    scanf("%d", &v);
    printf("Insert time in second: ");
    scanf("%d", &t);
    d=v*t;
    printf("Distance= %d meter", d);
}
