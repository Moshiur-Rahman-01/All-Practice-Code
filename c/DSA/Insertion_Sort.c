#include<stdio.h>

int main(){
    int i,j,x,num[10]={5,9,6,1,7,3,8,0,2,4};

    for(i=1;i<=10;i++){
        x=num[i];
        j=i-1;
        while(j>=1 && num[j]>x){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=x;
    }
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
}