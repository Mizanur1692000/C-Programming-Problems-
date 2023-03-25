#include<stdio.h>
main()
{
    int a=0, b=1, i=0, j,n;
    printf("Enter n: ");
    scanf("%d", &n);
    while(i<n)
    {
        if(i<=1)
        {
            j=i;
        }
        else
        {
            j=a+b;
            a=b;
            b=j;
        }
        printf("%d, ", j);
        i++;
    }
}
