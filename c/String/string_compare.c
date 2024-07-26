#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Moshiur Rahman";
    char str2[]="Moshiur";

    int d = strcmp(str1,str2);//same hole d=0 hobe

    if(d==0){
        printf("Strings are equal\n");
    }
    else{
        printf("String are not equal\n");
    }
}