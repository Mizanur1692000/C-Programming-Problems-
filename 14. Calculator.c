#include<stdio.h>
#include<math.h>
void main()
{
    double a,b;
    char op;
    printf("Choice an op(+,-,*,/,%): ");
    scanf("%c", &op);
    printf("Enter the two numbers: ");
    scanf("%lf %lf,", &a, &b);
    switch(op)
    {
    case '+':
        {
        printf("%.2lf + %.2lf = %.2lf", a,b,a+b);
        break;}
    case '-':
        {
        printf("%.2lf - %.2lf = %.2lf", a,b,a-b);
        break;
        }
    case '*':
        {
         printf("%.2lf * %.2lf = %.2lf", a,b,a*b);
         break;
        }
    case '/':
        {
        printf("%.2lf / %.2lf = %.2lf", a,b,a/b);
        break;
        }
    default :
        printf("Not an operator");
        return 0;
        }
}
