#include<stdio.h>
#include<math.h>
void main()
{
    int i,j=0,n;
    printf("Enter an positive number: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            j++;
            break;}
    }
    if(j==0)
    {
        printf("Prime number");
    }
        else
            printf("Not prime number");

}
