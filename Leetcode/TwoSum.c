#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int len){
    int i, j;

    for(i = 0; i < len - 1; i++){
        for(j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void){
    // encontrar a soma de dois numeros do array q dê 9
    int nums[] = {11, 12, 7, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    bubbleSort(nums, n);

    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}