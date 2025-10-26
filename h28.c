
#include <stdio.h>
int globalVar = 10;
void showLocal();

int main() {
    printf("Accessing global variable in main(): %d\n", globalVar);

    showLocal();
    printf("Accessing global variable again in main(): %d\n", globalVar);

    return 0;
}
void showLocal() {
    int localVar = 20; 
        printf("Accessing local variable in showLocal(): %d\n", localVar);
    printf("Accessing global variable in showLocal(): %d\n", globalVar);
}