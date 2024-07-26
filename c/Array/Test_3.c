//Assigning less array elements than Array size
#include<stdio.h>
#include<conio.h>
void main(){
    int Roll[3]={101,102,103};
    float Marks[3]={80,85.5,96};

    for(int i=0; i<3; i++){
        printf("Roll=%d\tMarks=%.2f\n",Roll[i],Marks[i]);
    }
    
}