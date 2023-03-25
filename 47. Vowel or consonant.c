#include<stdio.h>
main()
{
    char ch;
    printf("Enter the letter: ");
    ch=getche();
    switch(ch){
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
        printf(" is vowel.\n");
        break;
    default :
        printf(" is consonant.\n");
    }

}
