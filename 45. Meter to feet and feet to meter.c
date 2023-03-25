#include<stdio.h>
#include<conio.h>
main()
{
    float num;
    int choice;
    printf("1.meter to feet. 2.feet to meter.\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter the number of meter: ");
        scanf("%f", &num);
        printf("feet:%.2f", num*3.28);
    }
    else {
        printf("Enter the number of feet: ");
        scanf("%f", &num);
        printf("meters:%.2f", num/3.28);
    }
    getch();
}
