#include<stdio.h>
#include<conio.h>
int a,b;
void main()
{
    int Sum;
    scanf("%d %d",&a,&b);
    Sum=a+b;
    printf("Sum=%d,",Sum);
    int Subtract;
    scanf("%d %d",&a,&b);
    Subtract=a-b;
    printf("Subtract=%d,",Subtract);
    int Multiplication;
    scanf("%d %d",&a,&b);
    Multiplication=a*b;
    printf("Multiplication=%d,",Multiplication);
    int Division;
    scanf("%d %d",&a,&b);
    Division=a/b;
    printf("Division=%d",Division);
    getch();
}
