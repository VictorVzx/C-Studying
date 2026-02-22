// Biblioteca principal - Standart IO
#include <stdio.h>

// função principal (loop)
int main(){

    int idade = 18;

    // Também poderia ser Double, pois tem mais "precisão".
    float altura = 1.74;

    // Também é possivel fazer um array de caracteres, assim formando uma string (cadeia)
    char inicial = 'v';

    // Printa tudo formatado.
    printf("Idade: %d\nAltura: %.2f\nInicial do Nome: %c", idade, altura, inicial);

    // retorna 0, pois é uma função int.
    return 0;
}