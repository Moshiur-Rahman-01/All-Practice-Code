#include<stdio.h>
int main()
{
    char s[]={'M','o','s','h','i','u','r','\0'};
    char ful[]="Moshiur Rahman";
    char full[]="Moshiur \
    Rahman";                       //line break....

    printf("s = %s\n",s);
    printf("s = %c\n",s[3]);
    printf("Full name : %s\n",ful);
    printf("Full name : %s\n",full);
}