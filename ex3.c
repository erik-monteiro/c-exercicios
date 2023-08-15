#include <stdio.h>
#define SIZE 5

void invert(int*, int);

void invert(int *a, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = *(a + i);
        *(a + i) = *(a + size - i - 1);
        *(a + size - i - 1) = temp;
    }
}

int main() {
    int array[SIZE] = { 20, 30, 40, 100, 300 };

    invert(array, 5);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

