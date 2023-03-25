#include<stdio.h>
main()
{
    float a,b,c,d,Average;
    printf("Enter the four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    Average=((a+b+c+d)/4);
    printf("Average=%.2f", Average);
}
