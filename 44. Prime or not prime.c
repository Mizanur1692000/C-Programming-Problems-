#include<stdio.h>
main()
{
    int num,i,is_prime;
    printf("Enter the number to be tested: ");
    scanf("%d", &num);
    is_prime=1;
    for(i=2; i<=num/2; i=i+1)
        if((num%i)==0) is_prime=0;
    if(is_prime==1&&num!=0&&num!=1)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");
}
