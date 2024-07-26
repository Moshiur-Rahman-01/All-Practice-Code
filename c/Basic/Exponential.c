#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result = exp(x);//exp = 2.72
    printf("exp(%lf) = %.2lf\n",x,result);
    return 0;
}