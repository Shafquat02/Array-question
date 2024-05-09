#include <stdio.h>

int main() {
    int arr[] = {2, 4, 8, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in the array is %d", sum);
    return 0;
}