#include<stdio.h>
#include<math.h>
main()
{
    int a,b,sum,subtract,multiplication;
    float division;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    subtract=a-b;
    multiplication=a*b;
    division=(a/b);
    printf("Sum= %d\nSubtract= %d\nMultiplication= %d\nDivision= %.2f", sum,subtract,multiplication,division);
    return 0;
}
