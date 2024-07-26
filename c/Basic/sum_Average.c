#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float average;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2 ;
    average =(float)sum/2 ;
    
    printf("The sum is %d\n",sum);

    printf("The average is %.2f\n",average);
    
    return 0 ;
}