#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que imprima todos os números de 100 até 1. 

int main(){
	system ("color 9F");
	
	//variaveis
	int numero;
	
	//estrutura de repetição usando while
	printf("Usando while\n");
	numero=100;
	while (numero>0){
		printf("%d\n", numero--);
	}
		
	//estrutura de repetição usando do while
	printf("Usando do-while\n");
	numero=100;
	do{
		printf("%d\n", numero--);	
	}
	while (numero>0);
	
	//estrutura de repetição usando for
	printf("Usando for\n");
	for (numero=100; numero>0;numero--){
		printf("%d\n", numero);
	}
	
	//fim
	getch();
}
