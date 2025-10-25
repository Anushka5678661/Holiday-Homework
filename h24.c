
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\n--- Count Summary ---\n");
    printf("Positive Numbers: %d\n", positive);
    printf("Negative Numbers: %d\n", negative);
    printf("Even Numbers: %d\n", even);
    printf("Odd Numbers: %d\n", odd);

    return 0;
}