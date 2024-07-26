//Assigning value to Array element
#include<stdio.h>
#include<conio.h>
void main()
{
    int Roll[5];
    float Marks[5];
    for(int i=0;i<5;i++){
        printf("Enter Roll[%d] & Marks[%d]\n",i,i);
        scanf("%d%f",&Roll[i],&Marks[i]);
    }

    for(int i=0; i<5; i++){
        printf("Roll[%d]=%d\tMarks[%d]=%.2f\n",i,Roll[i],i,Marks[i]);
    }
    getch();
    
}