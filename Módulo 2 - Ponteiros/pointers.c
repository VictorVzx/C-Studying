#include <stdio.h>


// Não sei exatamente o que esse (void) faz, mas vejo uma galera usando entao usarei kkkk.
int main(void){
    int num = 50;
    int *ptr = &num;

    // Muda o valor do endereço da variavel num.
    *ptr = 99;

    printf("Numero mudado pelo ponteiro: %d", num);

    return 0;
    /*
        Algo que achei interessante é que posso fazer o usuario mudar o valor da variavel atraves de um scanf

        tipo um valor de um produto, incrivel. Me explica também a função de cada tipo, em funções e etc

    */
}