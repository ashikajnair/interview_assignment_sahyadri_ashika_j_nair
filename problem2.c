#include <stdio.h>

void zeroes(int array[],int n) 
{
    int j = 0;
    for (int i = 0;i<n; i++) {
        if (array[i] != 0) {
            if (i != j) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

            j++;
        }
    }
}
