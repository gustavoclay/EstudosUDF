#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que imprima todos os n�meros de 250 a 500.

int main(){
	system ("color 9F");
	
	//variaveis
	int numero;
	
	//estrutura de repeti��o usando for
	printf("Usando for\n");
	for (numero=250; numero<=500;numero++){
		printf("%d\n", numero);
	}
	
	//fim
	getch();
}
