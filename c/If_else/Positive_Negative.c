#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n>0){
        printf("The number is positve.");
    }
    else if(n<0){
        printf("The number is Negative.");
    }
    else {
        printf("The number is Zero...!");
    }
    return 0;
}