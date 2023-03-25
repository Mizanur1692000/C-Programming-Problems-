#include<stdio.h>
#include<conio.h>
main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    ((a||b||c!=c) && ((a+b)>c && (b+c)>a && (c+a)>b))?
    printf("It is a triangle"):
        printf("It is not a triangle");
    getch();
}
