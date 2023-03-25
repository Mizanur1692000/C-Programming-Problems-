#include<stdio.h>
int sum(int v, int w, int x, int y, int z);
float average(float f, float g, float h, float i, float j);
int main()
{
    int a,b,c,d,e;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("d= ");
    scanf("%d", &d);
    printf("e= ");
    scanf("%d", &e);
    printf("The Sum is= %d \n", sum(a,b,c,d,e));
    printf("The Average is= %.2f ", average(a,b,c,d,e));
}
    int sum(int v, int w, int x, int y, int z)
    {
    return v+w+x+y+z;
    }
    float average(float f, float g, float h, float i, float j)
    {
    return (f+g+h+i+j)/5;
    }
