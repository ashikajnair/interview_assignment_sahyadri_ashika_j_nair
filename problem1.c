#include<stdio.h>

void duplicate(int array[], int size)
{
    for (int i=0; i<size -1;i++){
        for(int j=i+1; j< size;j++){
            if(array[i] == array[j]){
                printf("true");
                return;

            }

        }       
    }
printf("false");
    
}
