#include <stdio.h>

struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    float sum = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Enter Name: \n");
        scanf("%s", emp[i].name);

        printf("Enter Address: \n");
        scanf("%s", emp[i].address);

        printf("Enter Age: \n");
        scanf("%d", &emp[i].age);

        printf("Enter Salary: \n");
        scanf("%f", &emp[i].salary);

        sum += emp[i].salary;
    }

    float average = sum / n;

    printf("\nAverage Salary = %.2f\n", average);

    return 0;
}