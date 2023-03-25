#include<stdio.h>
main()
{
    float a, area;
    printf("a: ");
    scanf("%f", &a);
    area=(pow(a,2)*sqrt(3))/4;
    printf("The area of equilateral triangle is: %.2f", area);
}
