#include <stdio.h>

void delete_element(int array[], int size, int index) {
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
    printf("After deletion, the element of array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 3;

    delete_element(array, size, index);

    return 0;
}