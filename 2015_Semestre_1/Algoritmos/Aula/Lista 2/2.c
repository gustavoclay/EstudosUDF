#include <stdio.h>
#include <conio.h>

// crie um programa em C que leia 10 numeros, armazene em um vetor e diga qual elemento é o maior, e o seu valor

int main(){
	//variaveis
	int i, j, a, Num[10], Max=0;
	//recebe 10 números do usuário
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d",&Num[i]);
		if(Num[i]>Max){
			Max=Num[i];
			}
}
	//mostra o resultado
	printf("O maior elemento eh: %d", Max);
	getch();
}
