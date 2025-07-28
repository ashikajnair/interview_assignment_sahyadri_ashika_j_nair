#include <stdio.h>
#include "problem2.c" 

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void main() {
    int array_1[] = {0, 1, 0, 3, 12};
    int array_2[] = {1, 2, 3, 4};
    int array_3[] = {0, 0, 0, 0};

    int sizes[] = {5, 4, 4};
    int* tests[] = {array_1, array_2, array_3};

    for (int i = 0; i < 3; i++) {

        zeroes(tests[i], sizes[i]);
        printArray(tests[i], sizes[i]);
        
    }

}
