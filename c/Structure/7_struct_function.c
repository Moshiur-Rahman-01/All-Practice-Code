#include<stdio.h>
#include<string.h>
struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}

int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Moshiur Rahman");
    person1.age = 22;
    person1.salary = 6100;

    display(person1);

    strcpy(person2.name,"Sanzida islam");
    person2.age = 22;
    person2.salary = 6100;

    display(person2);
    return 0;
}