#include <stdio.h>

int main(void){
    int array[] = {3, 4, 6, 10, 3, 9};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%ld\n", sizeof(array));
    printf("%d", size);

    int min = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    
    printf("Menor numero: %d", min);
    
    return 0;
}