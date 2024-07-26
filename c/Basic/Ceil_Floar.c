#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    scanf("%lf",&x);
    result = ceil(x);//output hobe number er uporer integer number
    printf("ceil(%lf) = %.2lf\n",x,result);

    scanf("%lf",&x);
    result = floor(x);//output hobe number er nicher integer number
    printf("floor(%lf) = %.2lf\n",x,result);

    return 0;
}