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
    
    if(person1.age==person2.age && person1.salary==person2.salary)
    printf("person1 equal to person2");
    else
    printf("person1 not equal to person2");
    
    

    return 0;
}