#include<stdio.h>
// global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;

    person1.age = 22;
    person1.salary = 6100;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2.age = 23;
    person2.salary = 2100;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    return 0;
}