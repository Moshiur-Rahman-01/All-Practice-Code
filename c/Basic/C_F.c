#include<stdio.h>
int main()
{
    float c,f;
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("C = %f\n",c);

    scanf("%f",&c);
    f = 1.8*c+32;
    printf("F = %f\n",f);
    return 0 ;
}