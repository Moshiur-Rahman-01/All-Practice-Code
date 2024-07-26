#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Moshiur Rahman";// eta bad jeto

    strcat(str1,str2);
    //strcat(str1,"Moshiur Rahman");

    printf("str1 = %s\n",str1);
}