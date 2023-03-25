#include<stdio.h>
main()
{
    int n,i,j;
    printf("Value of N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

}
