#include<stdio.h>
// global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1 = {22,6250};
    struct person person2,person3;

    //element wise assignment
    person2.age = 23;
    person2.salary = 6800;

    //structure variable assignment
    person3 = person2;
    

    
    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    printf("\nPerson2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("\nPerson3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

    return 0;
}