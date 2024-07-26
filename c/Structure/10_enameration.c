#include<stdio.h>

enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;
    day1 = sun;
    day2 = wed;
    int dif = day2-day1;
    printf("Differance = %d\n",dif);
}