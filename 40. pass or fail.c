#include<stdio.h>
main()
{
    int mark;
    printf("Enter the mark: ");
    scanf("%d", &mark);
    if(mark>=40)
        printf("The student is passed.");
    if(mark<40)
        printf("The student is failed.");
}
