#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float average;

    scanf("%d%d%d",&a,&b,&c);

    sum = a+b+c ;
    average =(float) sum/3 ;
    printf("The sum is = %d\nThe average is = %.2f\n",sum,average);

    return 0 ;
}