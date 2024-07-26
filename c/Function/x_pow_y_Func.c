#include<stdio.h>
void ScalculatePower(double b, double e)
{
    double result=1,i;
    for(i=1; i<=e;i++){
        result = result*b;
    }
    printf("%.2lf\n",result);
}
int main()
{
    double b,e;
    printf("Enter base and exp = ");
    scanf("%lf%lf",&b,&e);

    calculatePower(b,e);
    //calculatePower(5,6);
   // calculatePower(7,2);
}