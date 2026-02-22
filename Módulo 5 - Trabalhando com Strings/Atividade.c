#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50];
    char sobrenome[50];
    char completo[100];

    printf("Digite seu nome completo: ");
    fgets(completo, 100, stdin);

    size_t tamanho = strlen(nome);
    printf("Nome: %s\nTamanho: %ld", completo, tamanho);
    
    return 0;

}