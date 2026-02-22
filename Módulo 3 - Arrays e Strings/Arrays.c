#include <stdio.h>

int main(void){

    // Jeito fácil (lê lixo)
    int nums[5] = {12, 33, 5, 42, 22};
    // printf("%d", nums[4]);

    // Percorrendo
    for(int i; i < 5; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}