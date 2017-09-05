#include <stdio.h>
#include <string.h>

float calculaMedia(float nota1, float nota2, float nota3){
	float media;
	media = (nota1+nota2+nota3)/3;
	return media;
}

int main(void){
	char nome[40];
	float nota1, nota2, nota3, media;

	printf("Informe o nome de aluno: ");
	scanf("%s", &nome);
	printf("Informe a nota da prova 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota da prova 2: ");
	scanf("%f", &nota2);
	printf("Informe a nota da prova 3: ");
	scanf("%f", &nota3);
	
	media = calculaMedia(nota1, nota2, nota3);
	
	printf("\nAluno: %s\n", nome);
	printf("Media: %.2f\n", media);
	
	system("Pause");
	return 0;
}
