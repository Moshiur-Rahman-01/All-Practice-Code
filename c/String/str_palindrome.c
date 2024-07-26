#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="Moshiur Rahman";
    char str1[30];
    
    int i=0,len=0,j;
    while(str[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        str1[j] = str[i];
        }
        str1[j]='\0';

        printf("str = %s\n",str);
        printf("str1 = %s\n",str1);

        int d = strcmp(str,str1);
        if(d==0){
            printf("String is palindrome\n");
        }
        else{
            printf("String is not palindrome\n");
        }
}