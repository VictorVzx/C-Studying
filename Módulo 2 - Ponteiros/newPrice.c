#include <stdio.h>

int main(void){
    double price;
    double *ptr = &price; 

    printf("Digite o valor do produto: ");
    scanf("%lf", ptr);

    printf("Edite o valor do produto: ");
    scanf("\n%lf", ptr);



    return 0;
}