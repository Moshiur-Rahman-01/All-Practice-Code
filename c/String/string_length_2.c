#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Moshiur Rahman";
    int i=0,length=0;
    while(s[i]!='\0'){
        length++;
        i++;
    }
    printf("Length = %d\n",length);
}