#include<stdio.h>

int main(){
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int N=10,LOC,MAX=data[0],K=0;
    
    while(K<N){
        if(MAX<data[K]){
            MAX=data[K];
            LOC=K;
        }
        K++;
    }
    printf("LOC = %d, MAX = %d",LOC,MAX);
}