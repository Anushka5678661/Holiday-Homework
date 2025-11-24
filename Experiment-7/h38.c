#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a = %d, Address = %p, Pointer Value(p1) = %p, Value via pointer = %d\n",
            a, &a, p1, *p1);

    printf("Value of b = %.2f, Address = %p, Pointer Value(p2) = %p, Value via pointer = %.2f\n",
            b, &b, p2, *p2);

    printf("Value of c = %c, Address = %p, Pointer Value(p3) = %p, Value via pointer = %c\n",
            c, &c, p3, *p3);

    return 0;
}