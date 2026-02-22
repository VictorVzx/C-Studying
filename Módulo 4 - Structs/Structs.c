#include <stdio.h>

typedef struct{
    char marca[50];
    double preco;
} Produto;

int main(void){

    Produto mouse = {"Logitech", 29.2};
    Produto *ptr = &mouse;

    printf("Marca: %s\nPreço: %.2lf", ptr->marca, ptr->preco);

    return 0;
}
