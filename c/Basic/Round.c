#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    scanf("%lf",&x);
    result = round(x);// 0.5 er upore hole 1 jog hobe 
    printf("Round(%lf) = %.2lf\n",x,result);
    return 0;
}