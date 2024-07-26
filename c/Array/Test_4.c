//Assigning less array elements than Array size
#include<stdio.h>
#include<conio.h>
void main(){
    int Roll[5]={101,102,103};
    float Marks[5]={80,85.5,96};

    for(int i=0; i<5; i++){
        printf("Roll[%d]=%d\tMarks[%d]=%.2f\n",i,Roll[i],i,Marks[i]);
    }
    
}