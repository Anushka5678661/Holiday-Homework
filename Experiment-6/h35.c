#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[100];
    float salary;
};

void readEmployeeData(struct Employee emp[], int size) {
    printf("--- Enter Data for %d Employees ---\n", size);
    for (int i = 0; i < size; i++) {
        printf("\nEmployee %d:\n", i + 1);
        
        printf("Enter Name: ");
        
        scanf(" %49[^\n]", emp[i].name); 
        
        printf("Enter Address: ");
        scanf(" %99[^\n]", emp[i].address);
       
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void sortEmployeesByName(struct Employee emp[], int size) {
 
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
           
            if (strcmp(emp[j].name, emp[j + 1].name) > 0) {
              
                struct Employee temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

void displayEmployeeData(struct Employee emp[], int size) {
    printf("\n--- Employee Information (Sorted by Name) ---\n");
    for (int i = 0; i < size; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("  Name:    %s\n", emp[i].name);
        printf("  Address: %s\n", emp[i].address);
        printf("  Salary:  %.2f\n", emp[i].salary);
    }
}

int main() {
    const int NUM_EMPLOYEES = 5;

    struct Employee employees[NUM_EMPLOYEES];

    readEmployeeData(employees, NUM_EMPLOYEES);

    sortEmployeesByName(employees, NUM_EMPLOYEES);
 
    displayEmployeeData(employees, NUM_EMPLOYEES);

    return 0;
}