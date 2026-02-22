#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    //pivo
    int p = arr[low];
    // Menor valor do array
    int i = low;
    // Maior valor do array
    int j = high;
    
    // verifica se i e menor q j e faz o loop
    while(i < j){

        // pega o menor valor e verifica se é realmente o maior?
        while(arr[i] <= p && i <= high - 1){
            i++;
        }

        // mesma coisa de cima mas em vice versa
        while(arr[j] > p && j >= low + 1){
            j--;
        }

        if (i < j){
            //troca a posição do menor com o maior
            swap(&arr[i], &arr[j]);
        }
    }
    // troca a posição do pivot com o menor numero
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        // partition index
        int pi = partition(arr, low, high);
    
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void){
    int array[5];
    int n = sizeof(array) / array[0];

    printf("Digite 5 numeros: ");
    scanf("%d", &array);

    quickSort(array, 0, n -1);

    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}