#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is = %.2f\n",area);

    return 0;

}