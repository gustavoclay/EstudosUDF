#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que imprima todos os n�meros de 100 at� 1. 

int main(){
	system ("color 9F");
	
	//variaveis
	int numero;
	
	//estrutura de repeti��o usando while
	printf("Usando while\n");
	numero=100;
	while (numero>0){
		printf("%d\n", numero--);
	}
		
	//estrutura de repeti��o usando do while
	printf("Usando do-while\n");
	numero=100;
	do{
		printf("%d\n", numero--);	
	}
	while (numero>0);
	
	//estrutura de repeti��o usando for
	printf("Usando for\n");
	for (numero=100; numero>0;numero--){
		printf("%d\n", numero);
	}
	
	//fim
	getch();
}
