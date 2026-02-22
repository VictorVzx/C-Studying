#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int p = arr[low]; // Pivot
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= p && i <= high - 1){
            i++;
        }

        while(arr[j] > p && j >= low + 1){
            j--;
        }

        if(i < j){
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        // Parition Index / Índice de partição
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void){
    int numeros[] = {1, 42, 123, 12, 11, 9, 10, 94, 123};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    quickSort(numeros, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d, ", numeros[i]);

    return 0;
}