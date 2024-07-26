#include<stdio.h>

double area(double b, double h)
{
    return 0.5*b*h;
}
int main()
{
    double b,h;
    scanf("%lf%lf",&b,&h);
    printf("Area is = %.2lf\n",area(b,h));
}