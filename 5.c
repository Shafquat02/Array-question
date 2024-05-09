#include <stdio.h>

int find_index(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = find_index(arr, n, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
    return 0;
}