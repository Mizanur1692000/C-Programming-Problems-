#include<stdio.h>
#define PI 3.1416
float trianglearea(float a, float b);
float rectanglearea(float c, float d);
float squarearea(e);
float circlearea(r);


int main()
{
    int base,height,radius,length,op;
    printf("4 different functions.\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. square\n");
    printf("4. circle\n");
    printf("Take an option= ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
            {
                printf("Enter base= ");
                scanf("%d", &base);
                printf("Enter height= ");
                scanf("%d", &height);
                printf("Area of the triangle is= %.2f square unit", trianglearea(base, height));
                break;
            }
        case 2:
            {
                printf("Enter base= ");
                scanf("%d", &base);
                printf("Enter height= ");
                scanf("%d", &height);
                printf("Area of the rectangle is= %.2f square unit", rectanglearea(base,height));
                break;
            }
        case 3:
            {
                printf("Enter length= ");
                scanf("%d", &length);
                printf("Area of the square is= %.2f square unit", squarearea(length));
                break;
            }
        case 4:
            {
                printf("Enter radius= ");
                scanf("%d", &radius);
                printf("Area of the circle is= %.2f square unit", circlearea(radius));
                break;
            }
        default :
            {
                printf("Not a correct option.");
            }
        }
}
float trianglearea(float a, float b)
{
    return 0.5*a*b;
}
float rectanglearea(float c, float d)
{
    return c*d;
}
float squarearea(e)
{
    return e*e;
}
float circlearea(r)
{
    return PI*r*r;
}
