//base^exponent
//2^3=2*2*2=8
#include<stdio.h>
#include<math.h>
int main()
{
    double b,e;
    printf("Enter base and exp = ");
    scanf("%lf%lf",&b,&e);
    printf("Result = %.2lf",pow(b,e));

}