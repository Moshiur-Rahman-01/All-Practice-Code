#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("Letter is Capital");
    }
    else if (ch>='a' && ch<='z'){
        printf("Letter is Small");
    }
    else {
        printf("Not a letter");
    }
    return 0;
}