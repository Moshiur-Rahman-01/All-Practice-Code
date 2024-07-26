#include<stdio.h>
#include<math.h>
int main ()
{
    double x,result;
    scanf("%lf",&x);

    result = sin(x);
    printf("sin(%lf) = %.2lf\n",x,result);
    return 0 ;
}