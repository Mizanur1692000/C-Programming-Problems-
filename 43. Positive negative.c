#include <stdio.h>

void main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", &number);
    if (number >= 0)
        printf("%d is a positive number \n", number);
    else
        printf("%d is a negative number \n", number);
}
