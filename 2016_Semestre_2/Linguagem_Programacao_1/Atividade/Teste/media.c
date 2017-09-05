#include <stdio.h>
#include <string.h>
float nota[10];
int i;

void calculaMedia(float nota[i], float media){
	for(i=1; i<=3; i++){
		media += nota[i];
	}
	media = media/3;
	printf("\nMedia: %.2f\n",media);
}

void main(void){
	char nome;
	float nota[10], media = 0;
	int i;
	
	printf("Informe o nome de aluno: ");
	scanf("%s");
	for(i=1; i<=3; i++){
		printf("Informe a nota da prova %d: ",i);
		scanf("%f", &nota[i]);
	}
	
	calculaMedia(nota, media);
	
	system("Pause");
	return 0;
}
