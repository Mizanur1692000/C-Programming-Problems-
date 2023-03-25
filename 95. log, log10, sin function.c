#include<stdio.h>
#include<math.h>

double Log(double x)
{
  return log(x);
}

double Log10(double x)
{
  return log10(x);
}

double Sin(double x)
{
  return sin(x);
}
double Exp(double x)
{
  return exp(x);
}
double Cos(double x)
{
  return cos(x);
}
double Round(double x)
{
  return round(x);
}
double Trunc(double x)
{
  return trunc(x);
}
double Ceil(double x)
{
  return ceil(x);
}
double Floor(double x)
{
  return floor(x);
}

int main()
{
  int ch;
  double l,L,s,e,c,r,t,Ceil,Floor;
  while(1)
  {
    printf("What do you want: \n\t\t1.log\n\t\t2.log10\n\t\t3.sin\n\t\t4.exp\n\t\t5.cos\n\t\t6.round\n\t\t7.trunc\n\t\t8.ceil\n\t\t9.floor\n");
    printf("Enter your choice: ");
  scanf("%d",&ch);
    if(ch==1)
    {
      printf("Enter the value: ");
      scanf("%lf",&l);
      printf("Value of log(%lf) is: %lf\n",l,Log(l));
    }
    else if(ch==2)
    {
      printf("Enter the value: ");
      scanf("%lf",&L);
      printf("Value of log10(%lf) is: %lf\n",L,Log10(l));
    }
    else if(ch==3)
    {
      printf("Enter the value: ");
      scanf("%lf",&s);
      printf("Value of sin(%lf) is: %lf\n",s,Sin(s));
    }
    else if(ch==4)
    {
      printf("Enter the value: ");
      scanf("%lf",&e);
      printf("Value of exp(%lf) is: %lf\n",e,Exp(e));
    }
     else if(ch==5)
    {
      printf("Enter the value: ");
      scanf("%lf",&c);
      printf("Value of cos(%lf) is: %lf\n",c,Cos(c));
    }
      else if(ch==6)
    {
      printf("Enter the value: ");
      scanf("%lf",&r);
      printf("Value of round(%lf) is: %lf\n",r,Round(r));
    }
      else if(ch==7)
    {
      printf("Enter the value: ");
      scanf("%lf",&t);
      printf("Value of trunc(%lf) is: %lf\n",t,trunc(t));
    }
      else if(ch==8)
    {
      printf("Enter the value: ");
      scanf("%lf",&Ceil);
      printf("Value of ceil(%lf) is: %lf\n",Ceil,ceil(Ceil));
    }
      else if(ch==9)
    {
      printf("Enter the value: ");
      scanf("%lf",&Floor);
      printf("Value of floor(%lf) is: %lf\n",Floor,floor(Floor));
    }

  }
}
