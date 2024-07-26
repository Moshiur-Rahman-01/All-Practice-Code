#include<stdio.h>
int fact(int a);
int main()
{
    int result = fact(5);
    printf("Factorial = %d\n",result);
}
int fact(int a)
{
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}