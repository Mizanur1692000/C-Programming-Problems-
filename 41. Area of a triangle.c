#include<stdio.h>
main()
{
    float a,b,area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &a);
    printf("Enter the height of the triangle: ");
    scanf("%f", &b);
    area=(a*b)/2;
    printf("Area of the triangle is: %.2f ", area);
}
