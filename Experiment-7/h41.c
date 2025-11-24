
#include <stdio.h>

void updateValues(int *a, int *b) 
{
    *a += 10;
    *b *= 2;
}

int main() 
{
    int x = 5, y = 3;

    printf("Before: x = %d, y = %d\n", x, y);

    updateValues(&x, &y);

    printf("After:  x = %d, y = %d\n", x, y);

    return 0;
}