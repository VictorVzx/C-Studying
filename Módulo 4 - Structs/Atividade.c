#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main(void){
    Aluno alunos[3] = {
        {"Carlos", 18, 6.5},
        {"Victor", 18, 10.0},
        {"Roberta", 17, 8.5}
    }; 

    for (int i = 0; i < 3; i++){
        printf("Nome: %s\nIdade: %d\nNota: %.2f\n\n",
                alunos[i].nome,
                alunos[i].idade,
                alunos[i].nota);
    }

    Aluno maior = alunos[0];
    for(int n = 0; n < 3; n++){
        if (alunos[n].nota > maior.nota){
            maior = alunos[n];
        }

    }
    
    printf("Aluno com a maior nota: %s\nNota: %.2f", maior.nome, maior.nota);


    return 0;
}