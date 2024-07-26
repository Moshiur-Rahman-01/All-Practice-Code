#include<stdio.h>
int main(){
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int i=0,position=-1,item;

    printf("Enter a item: ");
    scanf("%d",&item);

    while (i<10)
    {
        if(item==data[i]){
            position=i+1;
        }
        i++;
    }
    if(position==-1){
        printf("Item is not in the array data.");
    }
    else{
        printf("%d is the location of Item.",position);
    }
}