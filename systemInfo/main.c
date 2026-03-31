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
  int array[] = {1, 4, 2, 5, 3, 6};
  int len = sizeof(array) / sizeof(array[0]);

  printf("Before\n");
  for(int i = 0; i < len; i++){
    printf("%d ", array[i]);
  }

  bubbleSort(array, len);
  
  printf("\nAfter\n");
  for(int i = 0; i < len; i++){
    printf("%d ", array[i]);
  }

  return 0;
}
