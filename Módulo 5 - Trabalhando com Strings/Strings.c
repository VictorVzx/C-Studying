#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50] = "Victor";
    char sobrenome[50] = "Compertino";
    char completo[100];

    strcat(nome, sobrenome);

    printf("%s\n", nome);

    return 0;
}