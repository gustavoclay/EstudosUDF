#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// solicitar nome idade 3 notas - alunos ao termino calcular a media de idade dos alunos aprovados > 7 - struct
struct aluno {
	char nome[60];
	int idade;
	float nota1, nota2, nota3, media;	
};

void addAluno(struct aluno *alunos){
	int i=0;
	printf("Aluno: ");
	scanf("%s",&alunos[i]->nome);
	printf("Idade: ");
	scanf("%s",&alunos[i]->idade);
	printf("Nota 1: ");
	scanf("%s",&alunos[i]->nota1);
	printf("Nota 2: ");
	scanf("%s",&alunos[i]->nota2);
	printf("Nota 3: ");
	scanf("%s",&alunos[i]->nota3);
	alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
}

void mostraAluno(aluno *alunos){
	printf("Aluno: %s",alunos[i].nome);
	printf("Idade: %d",alunos[i].idade);
	printf("Nota 1: %d",alunos[i].nota1);
	printf("Nota 2: %d",alunos[i].nota2);
	printf("Nota 3: %d",alunos[i].nota3);
	printf("Media: %d",alunos[i].media);
}

int main(void){

	struct aluno alunos[1000];
	addAlunoa(aluno aluno1);
	mostraAluno(aluno aluno1);
	getch();
}






