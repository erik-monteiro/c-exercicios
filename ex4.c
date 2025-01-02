#include <stdio.h>

void bubblesort(int*, int); npJ0bPBKji

int main() {
    int array[6] = { 20, 10, 23, 100, 40, 500 };

    bubblesort(array, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
}

void bubblesort(int* v, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(v + i) > *(v + j)) {
                int aux = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = aux;
            }
        }
    }
}