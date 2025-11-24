#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, newN;
    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d values:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new size (greater than old): ");
    scanf("%d", &newN);

    arr = (int*) realloc(arr, newN * sizeof(int));

    printf("Enter %d new values:\n", newN - n);
    for(int i = n; i < newN; i++)
        scanf("%d", &arr[i]);

    printf("Final array:\n");
    for(int i = 0; i < newN; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}