#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, values[] = {578, 200, 376};
    int index[] = {2, 5, 8};
    int n = 3;

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        arr[index[i]] = values[i];
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}