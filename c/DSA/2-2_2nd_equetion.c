#include<stdio.h>
#include<math.h>
int main(){
    int A,B,C,D;
    float X,X1,X2;
    printf("Enter the values of A,B,C: ");
    scanf("%d%d%d",&A,&B,&C);
    D = B*B-4*A*C;

    if(D>0){
        X1 = (-B+sqrt(D))/2*A;
        X2 = (-B-sqrt(D))/2*A;
        printf("X1 = %.2f, X2 = %.2f",X1,X2);
    }
    else if(D==0){
        X = -B/2*A;
        printf("UNIQUE SOLUTION X = %.2f",X);
    }
    else{
        printf("NO REAL SOLUTIONS");
    }
}