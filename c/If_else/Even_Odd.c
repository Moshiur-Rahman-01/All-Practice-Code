#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(n>=0){
        if(n%2==0){
            printf("The number is Even.\n");
        }
        else if(n%2==1){
            printf("The number is Odd.\n");
        }
        else{
            printf("The number is Zero..!\n");
        }
    }
    else{
        printf("The number is Negative.\n");
    }
    return 0;
}