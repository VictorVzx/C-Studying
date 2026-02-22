#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num;

    int *nums = realloc(num, num * sizeof(int));

    if(nums == NULL){
        printf("Erro: Sem espaço suficiente!");

        return 1;
    }

    for(int i = 0; i < nums; i++){
        
    }


    return 0;
}