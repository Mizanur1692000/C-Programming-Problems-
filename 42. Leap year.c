#include<stdio.h>
main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%400==0 || (year%100!=0 && year%4==0))
        printf("%d is leap year.\n", year);
    else
        printf("%d is not leap year.", year);
}
