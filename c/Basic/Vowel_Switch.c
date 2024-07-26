#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'O' :
        case 'U' :
        case 'I' :
        printf("Vowel\n");
        break ;
        default :
        printf("Consonant\n");
    }
    return 0;
}