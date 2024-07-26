#include<stdio.h>
int main()
{
    int num[]={10,2,30,15,28,5};
    int value,position=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(int i=0; i<6; i++){
        if(value==num[i]){
            position = i+1;
            break;
        }
    }
    if(position==-1){
        printf("Value is not found");
    }
    else{
        printf("The value is found at position %d",position);
    }
}