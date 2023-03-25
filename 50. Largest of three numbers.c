#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter the three numbers:\n ");
    scanf("%d %d %d", &a, &b, &c);
    if((a>b)&&(a>c))
        printf("\n %d is largest.", a);
    else if ((b>c)&&(b>a))
        printf("\n %d is largest.", b);
    else
        printf("\n %d is largest.", c);
}
