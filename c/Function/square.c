#include<stdio.h>

int square(int a)
{
    return a*a;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The square is : %d",square(n));
}