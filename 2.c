#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 2;
    int new_value = 50;
    arr[index] = new_value;
    
    printf("Updated values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}