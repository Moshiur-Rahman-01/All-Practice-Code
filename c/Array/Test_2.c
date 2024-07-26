//Assigning value to char array element
#include<stdio.h>
#include<conio.h>
void main()
{
    char Name[7]="Moshiur";
    for(int i=0; i<7; i++){
        printf("%c",Name[i]);
    }
    getch();
}