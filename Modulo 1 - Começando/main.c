#include <stdio.h>
#include <stdlib.h>

int main(void){
    int idade;
    double altura = 2.0;

    int *ptr = malloc(idade * sizeof(int));

    if(idade == NULL){
        printf("Erro: Memoria insuficiente");

        return 1;
    }

    free(idade);

    return 0;
}