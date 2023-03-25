#include<stdio.h>
int checkprime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkprime(n);
    return 0;
}
int checkprime(int n)
{
    int i=1,count=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Given number is prime.");
    }
    else
        printf("Given number is not prime.");
}
