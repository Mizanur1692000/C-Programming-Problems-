#include<stdio.h>
main()
{
    float t,T;
    printf("Enter Fahrenheit degree: ");
    scanf("%f", &t);
    T=(t-32)*5/9;
    printf("Celcius: %.2f", T);
    return 0;
}
