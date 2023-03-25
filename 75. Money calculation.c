#include<stdio.h>
#include<conio.h>
main()
{
    float a,b,c,d,e,f,g,h,total;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("d=");
    scanf("%f",&d);
    printf("e=");
    scanf("%f",&e);
    printf("f=");
    scanf("%f",&f);
    printf("g=");
    scanf("%f",&g);
    printf("h=");
    scanf("%f",&h);
    total=1000*a+500*b+100*c+20*d+10*e+5*f+1*g+0.50*h;
    printf("Total=%.2f taka",total);
    getch();
}
