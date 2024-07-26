#include<stdio.h>
int main()
{
    int i,rem,sum=0,temp;
    // printf("Enter any number : ");
    // scanf("%d",&n);

    for(i=1;i<=100;i++){
        temp = i;
        while(temp!=0){
            rem = temp%10;
            sum = sum*10 + rem;
            temp = temp/10; 
        }
        if(i==sum){
            printf("%d\n",i);
        }
    }
    
    return 0;
}