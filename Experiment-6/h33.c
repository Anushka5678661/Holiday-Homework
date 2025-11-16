
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char fname[50];
    char lname[50];
};

int main() {
    struct Student s[5], temp;
    int i, j;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter first name: ");
        scanf("%s", s[i].fname);

        printf("Enter last name: ");
        scanf("%s", s[i].lname);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (s[i].roll_no > s[j].roll_no) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n--- Students in Ascending Order of Roll No ---\n");
    for (i = 0; i < 5; i++) {
        printf("Roll No: %d, Name: %s %s\n",
               s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}