#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int len){
    int i, j;

    for(i = 0; i < len; i++){
        for(j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void){
    int nums[] = {12, 32, 55, 34, 12, 54, 66};
    int lenght = sizeof(nums) / sizeof(nums[0]);

    bubbleSort(nums, lenght);

    for(int i = 0; i < lenght; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}