
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, *arr;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));

    printf("Values after calloc (should be 0):\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter new values:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Updated array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}