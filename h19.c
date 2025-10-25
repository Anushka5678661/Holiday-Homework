
#include <stdio.h>
void displayStudent(char name[], int rollNumber, float marks);
int main()
{
    char name[50];
    int rollNumber;
    float marks;
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter marks: ");
    scanf("%f", &marks);
    displayStudent(name, rollNumber, marks);
    return 0;
}
void displayStudent(char name[], int rollNumber, float marks) 
{
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %.2f\n", marks);
}