
#include <stdio.h>

int main() 
{
    int x = 5;
    int *p = &x;

    float y = 2.5;
    float *q = &y;

    char z = 'A';
    char *r = &z;

    printf("Initial addresses:\n");
    printf("int pointer   = %p\n", p);
    printf("float pointer = %p\n", q);
    printf("char pointer  = %p\n", r);

    p++;
    q++;
    r++;

    printf("\nAfter increment:\n");
    printf("int pointer   = %p\n", p);
    printf("float pointer = %p\n", q);
    printf("char pointer  = %p\n", r);

    p--; q--; r--;

    printf("\nAfter decrement (back to original):\n");
    printf("int pointer   = %p\n", p);
    printf("float pointer = %p\n", q);
    printf("char pointer  = %p\n", r);

    return 0;
}