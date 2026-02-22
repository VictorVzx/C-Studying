#include <stdio.h>
#include <stdlib.h>


// Calloc limpa os zeros -> entrega o heap limpo
int main(void){
    int n;

    printf("Digite quantos numeros você quer alocar: ");
    scanf("%d", &n);

    int *num = calloc(n, sizeof(int));

    if (num == NULL){
        printf("Erro: Sem espaço suficiente");
        return 1;
    }

    for (int i = 0; i < n; i++){
        num[i] = i * 10;
        printf("%d ", num[i]);
    }

    free(num);
    
    return 0;
}