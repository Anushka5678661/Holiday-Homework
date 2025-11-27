
#include <stdio.h>

#define ADD(a,b)    ((a) + (b))
#define SUB(a,b)    ((a) - (b))
#define MUL(a,b)    ((a) * (b))
#define DIV(a,b)    ((b) != 0 ? (a) / (b) : 0)
#define MOD(a,b)    ((a) % (b))

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nResults using macros:\n");
    printf("Addition = %d\n", ADD(x, y));
    printf("Subtraction = %d\n", SUB(x, y));
    printf("Multiplication = %d\n", MUL(x, y));
    printf("Division = %d\n", DIV(x, y));
    printf("Modulus = %d\n", MOD(x, y));

    return 0;
}