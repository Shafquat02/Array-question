#include <stdio.h>

int main() {
    int arr[100] = {0};
    int i, x, pos, n = 5;

    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the new element: ");
    scanf("%d", &x);
    printf("Enter the position: ");
    scanf("%d", &pos);

    for (i = n - 1; i >= pos; i--) {
    arr[i] = arr[i - 1];
    }
    
    arr[pos - 1] = x;
    
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}