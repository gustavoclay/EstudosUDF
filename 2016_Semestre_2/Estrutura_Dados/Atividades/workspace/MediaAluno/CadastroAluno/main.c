#include <stdio.h>

int main(void){

    struct Alunos{
        char nome[30];
        float mat,fis,media;
    };

    struct Alunos alunos[2];

    int i;

    for(i=0;i<2;i++){

        fflush(stdin);
        __fpurge(stdin);

        printf("Aluno: ");
        fgets(alunos[i].nome, 30, stdin);

        printf("Nota Matematica: ");
        scanf("%f", &alunos[i].mat);

        printf("Nota Fisica: ");
        scanf("%f", &alunos[i].fis);

        alunos[i].media = (alunos[i].mat+alunos[i].fis)/2;
    }

    printf("MEDIA\n\n");

    for(i=0;i<2;i++){
        printf("\nAluno: %s", alunos[i].nome);
        printf("\nMedia: %.2f", alunos[i].media);
        printf("\n");

    }

    return 0;
}
