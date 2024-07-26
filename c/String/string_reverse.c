#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Moshiur Rahman";
    printf("str = %s\n",str);

    strrev(str);
    printf("Reverse str = %s\n",str);
}