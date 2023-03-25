#include<stdio.h>
#include<conio.h>
main()
{
    int sec,h,m,s;
    printf("seconds=");
    scanf("%d",&sec);
    h=(sec/3600);
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(m*60));
    printf("%d Hour %d Minute %d second\n",h,m,s);
    getch();
}
