#include<stdio.h>
#include<conio.h>
main()
{
    char lower,upper;
    printf("Enter a lowercase letter:");
    scanf("%c",&lower);
    if(lower>='a'&&lower<='z'){
        upper=('A'+lower-'a');
    }
    else
        upper=lower;
    printf("The uppercase character is %c\n",upper);
    return 0;
}
