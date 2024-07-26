#include<stdio.h>
#include<math.h>
int main()
{
    double x ;
    scanf("%lf",&x);
    double result = log10(x);
    printf("log10(%lf) = %.2lf\n",x,result);

    return 0;
}