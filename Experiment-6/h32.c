
#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float mark;
};

int main() {
    struct student s;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter mark: ");
    scanf("%f", &s.mark);

    printf("\n--- Student Details ---\n");
    printf("Name : %s", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Mark : %.2f\n", s.mark);

    return 0;
}