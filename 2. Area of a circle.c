#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
    int r;
    float area;
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    area=pi*r*r;
    printf("Area= %.2f", area);
    return 0;
}
