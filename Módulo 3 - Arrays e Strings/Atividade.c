#include <stdio.h>

int main(void){
    //Array com os preços
    float prices[5] = {12.9, 83.1, 10.2, 45.2, 2.9};
    float soma = 0;
    
    // i = index/índice do array
    for (int i = 0; i < 5; i++){
        // .2f = duas casas decimais?
        printf("%.2f\n", prices[i]);

        soma = soma + prices[i];
    }
    
    float media = soma / 5;

    printf("Média: %.2f\n", media);

    return 0;
}