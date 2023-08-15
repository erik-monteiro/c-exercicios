#include <stdio.h>
#define SIZE 5

int findValue(int*, int);

int findValue(int* array, int search) {
    for (int i = 0; i < SIZE; i++) {
        if (*(array + i) == search) {
            return search;
        } 
    }

    return -1;
}

int main() {
    int array[SIZE] = { 20, 30, 40, 100, 300 };
    printf("%d", findValue(array, 42));
    return 0;
}
