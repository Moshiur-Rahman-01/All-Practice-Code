#include<stdio.h>
float Average(int a,int b, int c){
    return (a+b+c)/3;
}
int main(){
    int a,b,c;
    float avg;

    printf("Enter the 3 values: ");
    scanf("%d%d%d",&a,&b,&c);

    Average(a,b,c);
    printf("The average of %d, %d and %d is: %.2f",a,b,c,Average(a,b,c));
}