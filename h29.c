
#include <stdio.h>
int main() {
    int x = 10;
    printf("Value of x in main block: %d\n", x);

    {
        int y = 20;
        printf("Value of x inside inner block: %d\n", x);
        printf("Value of y inside inner block: %d\n", y);
    } 
    printf("Value of x outside inner block: %d\n", x);

    return 0;
}