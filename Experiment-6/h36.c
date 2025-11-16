
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};


struct employee {
    char name[50];
    int id;
    float salary;
    struct date dob;
};

void readEmployeeData(struct employee *emp) {
    printf("--- Enter Employee Information ---\n");
    
    printf("Enter Name: ");
    
    scanf(" %49[^\n]", emp->name); 
    
    printf("Enter ID: ");
    scanf("%d", &emp->id);
    
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);
    
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &emp->dob.day, &emp->dob.month, &emp->dob.year);
}

void displayEmployeeData(struct employee emp) {
    printf("\n--- Displaying Employee Information ---\n");
    printf("Name:    %s\n", emp.name);
    printf("ID:      %d\n", emp.id);
    printf("Salary:  %.2f\n", emp.salary);
    
    printf("DOB:     %02d-%02d-%d\n", emp.dob.day, emp.dob.month, emp.dob.year);
   
}

int main() {
    
    struct employee emp1;

    readEmployeeData(&emp1);

    displayEmployeeData(emp1);

    return 0;
}