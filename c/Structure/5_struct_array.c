#include<stdio.h>
// global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;

    for(i=0;i<4;i++){
        printf("Enter information for person : %d\n",i+1);
        printf("Enter age and salary = ");
        scanf("%d%f",&person[i].age,&person[i].salary);
    }
    for(i=0;i<4;i++){
         printf("Enter information for person : %d\n",i+1);
         printf("Age = %d\n",person[i].age);
         printf("Salary = %.2f\n",person[i].salary);
    }

    return 0;
}