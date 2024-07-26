#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("Large number is %d\n",a);
    }
    else if(a<b){
        printf("Large number is %d\n",b);
    }
    else{
        printf("Numbers are Equal");
    }
    return 0;
}