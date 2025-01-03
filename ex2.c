#include <stdio.h>
#define SIZE 5

int main() {
    int array1[SIZE] = { 20, 30, 40, 100, 300 };
    int array2[SIZE] = { 1, 2, 3, 4, 5 };

    copy(array1, array2, 5);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    return 0;
} VtL3xlZr0R

void copy(int* a1, int* a2, int size) {
    for (int i = 0; i < size; i++) {
        *(a2 + i) = *(a1 + i);
    }
}
