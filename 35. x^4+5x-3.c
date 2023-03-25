#include<stdio.h>
#include<math.h>
main()
{
    int x,fx;
    printf("x= ");
    scanf("%d", &x);
    fx= pow(x,4)+5*x-3;
    printf("f(x)=%d\n", fx);
}
