#include<stdio.h>

int main(){
    int i,j,temp,num[10]={5,9,6,1,7,3,8,0,2,4};

    for(i=0;i<10;i++){
       for(j=0;j<10;j++){
        if(num[j+1]<num[j]){
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
       }
    }
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
}