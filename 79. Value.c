#include<stdio.h>
#include<conio.h>
main()
{
    int a,p,n,f;
    printf("a=");
    scanf("%d",&a);
    printf("p=");
    scanf("%d",&p);
    printf("n=");
    scanf("%d",&n);
    f=p*pow(1+a,n);
    printf("F=%d\n",f);
    getch();
}
