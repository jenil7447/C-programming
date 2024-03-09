#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
void main()
{
    struct employee e;
    printf("\nEnter name of employee : ");
    scanf("%s",e.name);
    printf("\nEnter ID of employee : ");
    scanf("%d",&e.id);
    printf("\nEnter Salary of employee : ");
    scanf("%f",&e.salary);
    printf("\nName = %s",e.name);
    printf("\nID = %d",e.id);
    printf("\nSalary = %f",e.salary);
}
