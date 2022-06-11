/*C program that accepts an employee's ID, total worked hours of a month and 
the amount he received per hour. Print the employee's ID and salary (with two decimal places)
 of a particular month.*/
#include <stdio.h>
int main()
{
    int time, salary_ph;
    double salary;
    char id[10];
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);
    printf("Input the working hrs: ");
    scanf("%d", &time);
    printf("Salary amount/hr: ");
    scanf("%d", &salary_ph);
    printf("Employees ID = %s\n", id);
    salary = (salary_ph*time);
    printf("Salary = U$ %.2lf\n", salary);

    return 0;
}