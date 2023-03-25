#include<stdio.h>
int main()
{
    int ch;
    printf("Enter month number: ");
    scanf("%d", &ch);
    switch (ch){
        case 1 :
            printf("It contains 31 days");
            break;
        case 2 :
            printf("It contains 28 days\n");
            break;
        case 3 :
            printf("It contains 31 days\n");
            break;
        case 4 :
            printf("It contains 30 days\n");
            break;
        case 5 :
            printf("It contains 31 days\n");
            break;
        case 6 :
            printf("It contains 30 days\n");
            break;
        case 7 :
            printf("It contains 31 days\n");
            break;
        case 8 :
            printf("It contains 31 days\n");
            break;
        case 9 :
            printf("It contains 30 days\n");
            break;
        case 10 :
            printf("It contains 31 days\n");
            break;
        case 11 :
            printf("It contains 30 days\n");
            break;
        case 12 :
            printf("It contains 31 days\n");
            break;
        default:
            printf("Invalid input");
            }

}
