#include <stdio.h>
#include <stdlib.h>

// Malloc dá o heap sujo -> com lixo
int main(void){
    int n;

    printf("Quantos números você quer guardar?: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));

    if (nums == NULL){
        printf("Erro: Sem memória disponivel");
        
        return 1;
    }

    for(int i = 0; i <= n; i++){
        nums[i] = i * 10;
        printf("%d ", nums[i]);
    }

    free(nums);

    return 0;
}