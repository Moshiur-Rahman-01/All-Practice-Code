#include<stdio.h>

void display(char s[])
{
    int i=0;
    while(s[i]!='\0'){
        printf("%c\n",s[i]);
        i++;
    }
}
int main()
{
    char str[50]="Moshiur Rahman";
    display(str);
}