#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    scanf("%lf",&x);

    result = trunc(x);// only showing integer number

    printf("trunc(%.2lf) = %.2lf\n",x,result);
    return 0;
}