#include<stdio.h>
#include<math.h>

int prime(int n){
    if(n<=1) return 0;
    for(int i=2;i<sqrt(n+1);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int result=prime(n);
    if (result==1)
    {
        printf("%d is Prime Number.",n);
    }
    else{
        printf("%d is Not Prime Number.",n);
    }
    
}