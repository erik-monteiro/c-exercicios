#include <stdio.h>
#define SIZE 5

int findValue(int*, int);

int findValue(int* array, int search) {
    for (int i = 0; i < 5; i++) {
        if (*(array + i) == search) {
            return i;
        }
    }

    return -1;
}

int main() {
    int array[SIZE] = { 20, 30, 40, 100, 300 };
    printf("%d", findValue(array, 30));
    return 0;
}
