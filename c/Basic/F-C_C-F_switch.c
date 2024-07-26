#include<stdio.h>
int main()
{
    int choice;
    float temp,converted_temp;
    printf("Temperature conversation menu :\n1. Fahrenheit to Celcius.\n2. Celsius to Fahrenheit.\n");
    scanf("%d",&choice);

    switch(choice){
        case 1 :
        {
            printf("Enter the Fahrenheit Tempareture : ");
            scanf("%f",&temp);
            converted_temp = (temp-32)/1.8;
            printf("The temperature in celsius is : %.2f\n",converted_temp);
            break;
        }
        case 2 :
        {
            printf("Enter the Celsius Tempareture : ");
            scanf("%f",&temp);
            converted_temp = 1.8*temp+32;
            printf("The temperature in Fahrenheit is : %.2f\n",converted_temp);
        }
    }
    return 0;
}