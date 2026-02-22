#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int len){
    int i, j;
    for (i = 0; i < len - 1; i++){
        for (j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void){
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}