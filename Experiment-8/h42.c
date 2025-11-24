#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, *arr;
    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = 0, max = arr[0], min = arr[0];

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Sum = %d\nMax = %d\nMin = %d\n", sum, max, min);

    free(arr);
    return 0;
}