#include<stdio.h>
#include<conio.h>
void main()
{
    int i,total=0, Marks[5];
    for( i=0;i<5;i++){
        scanf("%d",&Marks[i]);
       total = total + Marks[i];
    }
     printf("Total = %d\n",total);
     printf("Average = %f\n",(float)total/5);
}