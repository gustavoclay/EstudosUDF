#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Elabore um algoritmo que imprima todos os n�meros de 1 at� 100. 

int main(){
	system ("color 9F");
	
	//variaveis
	int numero;
	
	//estrutura de repeti��o usando while
	printf("Usando while\n");
	numero=1;
	while (numero<=100){
		printf("%d\n", numero++);
	}
		
	//estrutura de repeti��o usando do while
	printf("Usando do-while\n");
	numero=1;
	do{
		printf("%d\n", numero++);	
	}
	while (numero<=100);
	
	//estrutura de repeti��o usando for
	printf("Usando for\n");
	for (numero=1; numero<=100;numero++){
		printf("%d\n", numero);
	}
	
	//fim
	getch();
}
