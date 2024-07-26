#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("The large number is %d",a);
    }
    else if(b>a && b>c){
        printf("The large number is %d",b);
    }
    else if(c>a && c>b){
        printf("The large number is %d",c);
    }
    else{
        printf("Numbers are equal");
    }
    return 0;
}