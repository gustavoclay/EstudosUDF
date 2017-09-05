#include <stdio.h>

float media(int n, float *vetor);

int main(){
	int qtd, i;
	printf("\nquantos numeros deseja: ");
	scanf("%d", &qtd);
	
	float vetor[qtd];
	for(i=0; i<qtd; i++){
		printf("\nDigite o %d. numero: ", i+1);
		scanf("%f", &vetor[i]);
	}
	printf("\n Media: %.2f", media(qtd, vetor));

}

float media(int n, float *vetor){
	int i;
	float media = 0;
	for(i=0; i<n; i++){
		media += vetor[i];
	}
	return(media/n);
}
