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
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void){
    int n;

    printf("Quantos numeros você vai digitar?: ");
    scanf("%d", &n);

    int array[n];

    printf("Digite os numeros (sem vírgulas): ");
    for(int j = 0; j < n; j++){
        scanf("%d", &array[j]);
    }


    bubbleSort(array, n);

    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}