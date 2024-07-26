#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{

    int result = sum(5,8);
    printf("The sum is : %d\n",result);
    printf("The sum is : %d\n",sum(10,20));
    
}