#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>


typedef long long int lli;


int main()
{
    double numbers[5] = {10,20,30,40,50};
    double *ptr = &numbers[0];
    printf("%lf\n",*ptr);
}