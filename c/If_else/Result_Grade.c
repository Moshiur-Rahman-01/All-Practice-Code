#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if(0<=marks && marks<=100){
        if(marks>=80){
            printf("A+");
        }
        else if(marks>=70){
            printf("A");
        }
        else if(marks>=60){
            printf("A-");
        }
        else if(marks>=50){
            printf("B");
        }
        else if(marks>=40){
            printf("C");
        }
        else if(marks>=33){
            printf("D");
        }
        else{
            printf("Fail");
        }
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}