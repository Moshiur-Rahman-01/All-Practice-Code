#include<stdio.h>

void maximum(int a[])
{
    int i;
    int max = a[0];
    for(i=1;i<5;i++){
        if(max<a[i]){
            max = a[i];
        }
        
    }
    printf("Maximum number is : %d\n",max);
}
int main()
{
    int num[]={10,20,30,40,50};
    maximum(num);
}