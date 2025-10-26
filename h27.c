
#include <stdio.h>
int count = 0;
void increment();
void display();

int main() {
    printf("Initial value of count = %d\n", count);
    increment();
    increment();
    display();
    return 0;
}
void increment() {
    count++;
    printf("Count incremented to %d\n", count);
}
void display() {
    printf("Final value of count = %d\n", count);
}