
#include <stdio.h>
void enterEmployeeDetails(char name[], int *id, char department[], float *salary);
void displayEmployeeDetails(char name[], int id, char department[], float salary);
int main() 
{
    char name[50];
    int id;
    char department[30];
    float salary;
    enterEmployeeDetails(name, &id, department, &salary);
    displayEmployeeDetails(name, id, department, salary);

    return 0;
}
void enterEmployeeDetails(char name[], int *id, char department[], float *salary) 
{
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Employee ID: ");
    scanf("%d", id);
    printf("Enter Department: ");
    scanf(" %[^\n]", department);
    printf("Enter Salary: ");
    scanf("%f", salary);
}
void displayEmployeeDetails(char name[], int id, char department[], float salary) 
{
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("Department: %s\n", department);
    printf("Salary: %.2f\n", salary);
}