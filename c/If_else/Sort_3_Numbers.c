#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    int lowest, middle, highest;

    // a is the lowest number
    if(a<=b && a<=c){
        lowest = a;
        if(b<=c){
            middle = b;
            highest = c;
        }
        else{
            middle = c;
            highest = b;
        }
    }
    else if(b<=a && b<=c){
        lowest = b;
        if(a<=c){
            middle = a;
            highest = c;
        }
        else {
            middle = c;
            highest = a;
        }
    }
    else{
        lowest = c;
        if(a<=b){
            middle = a;
            highest = b;
        }
        else {
            middle = b;
            highest = a;
        }
    }
    printf("\n\n");
    printf("asc: %d %d %d\n\n",lowest, middle, highest);
    printf("desc: %d %d %d\n\n",highest, middle, lowest);
}