#include<stdio.h>
#include "problem1.c"

void main(){

    int array_1[] = {1, 2, 3, -1};
    int array_2[] = {1, 2, -3, 4};
    int array_3[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int array_4[] = {0, 0, 0, 1};

    int sizes[] = {4, 4, 10, 4};
    int* tests[] = {array_1, array_2, array_3, array_4};

    for (int i = 0; i < 4; i++) {

        duplicate(tests[i], sizes[i]);
        printf("\n");
    }
    	
}