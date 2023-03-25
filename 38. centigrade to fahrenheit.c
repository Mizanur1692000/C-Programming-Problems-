#include<stdio.h>
main()
{
    int c,f;
    printf("Enter the value of centigrade: ");
    scanf("%d", &c);
    f=((9*c)+160)/5;
    printf("Fahrenheit: %d ", f);
}
