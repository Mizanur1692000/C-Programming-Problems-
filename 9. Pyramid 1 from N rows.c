#include<stdio.h>
main()
{
    int n,i,j,k,count=1;
    printf("Value of N: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("%d ", count);
        count++;
    }
        printf("\n");
    }

}

