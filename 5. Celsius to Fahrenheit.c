#include<stdio.h>
main()
{
    float t,T;
    printf("Enter Celcius degree: ");
    scanf("%f", &t);
    T=t*9/5+32;
    printf("Fahrenheit: %.2f", T);
    return 0;
}
