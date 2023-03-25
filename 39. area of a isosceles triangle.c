#include<stdio.h>
#include<math.h>
main()
{
    float a,b,area;
    printf("The length of equal arms(meter): ");
    scanf("%f", &a);
    printf("The length of other arm(meter): ");
    scanf("%f", &b);
    area=(b*sqrt(a*a-b*b))/4;
    printf("Area of the isosceles of triangle: %.2f sq-meter", area);
}
