
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main() {

    printf("Using stdio.h , Enter a character: ");
    char c = getchar();

    printf("Uppercase of the character = %c\n", toupper(c));

    char str1[50];
    strcpy(str1, "Hello C Programming"); 
    printf("Using string.h, Copied string: %s (Length = %zu)\n", str1, strlen(str1));

    int *ptr = (int*) malloc(sizeof(int));
    assert(ptr != NULL);

    *ptr = 25;
    printf("Using stdlib.h & assert.h , Value stored = %d\n", *ptr);

    free(ptr);

    srand(time(NULL));
    printf("Using time.h , Random number: %d\n", rand() % 100);

    double num = 16.0;
    printf("Using math.h , sqrt(16) = %.2f, pow(2,5) = %.2f\n", sqrt(num), pow(2,5));

    int s = sum(4, 10, 20, 30, 40);
    printf("Using stdarg.h , Sum of 4 numbers = %d\n", s);

    return 0;
}