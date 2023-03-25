#include<stdio.h>
main()
{
    char ch;
    printf("Enter A, a, B or b: ");
    ch=getche();
    switch(ch){
    case 'A' :
        printf("\n You have written A.");
        break;
    case 'a' :
        printf("\nYou have written a.");
        break;
    case 'B' :
        printf("\nYou have written B.");
        break;
    case 'b' :
        printf("\nYou have written b.");
        break;
    default :
        printf("\n You have not written A, a, B, or b.");
    }
}
