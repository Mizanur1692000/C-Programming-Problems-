#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

}

