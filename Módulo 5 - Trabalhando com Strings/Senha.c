#include <stdio.h>
#include <string.h>

int main(void){
    char senha[] = "1234";
    char verify[50];

    printf("Digite a senha: ");
    scanf("%s", &verify);

    if (strcmp(senha, verify) == 0){
        printf("Acesso garantido!");
    } else {
        printf("Senha incorreta");
    }

    return 0;
}
