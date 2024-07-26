#include<stdio.h>
int main()
{
    char s[30];
    printf("Enter your full name : ");
    /*
    scanf e space er porer input
    show korte parena tai gets(); use korbo...
    */ 
    gets(s);
    printf("Full name = %s\n",s);
}