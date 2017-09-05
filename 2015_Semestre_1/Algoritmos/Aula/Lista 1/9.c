#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se são iguais.

int main(){
	setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
	
	//variaveis
	int vlrN1,vlrN2;
	
	//recebe os valores do usuário
	printf ("Digite um número:");
	scanf ("%d",&vlrN1);
	printf ("Digite outro número:");
	scanf ("%d",&vlrN2);
	
	//verifica qual é o numero maior, menos ou se são iguais e mostra na tela
	if (vlrN1>vlrN2){
		printf("%d é maior que %d", vlrN1,vlrN2);
	}
	if (vlrN2>vlrN1){
		printf("%d é maior que %d", vlrN2,vlrN1);
	}
	if (vlrN1==vlrN2){
		printf("%d é igual a %d", vlrN1,vlrN2);
	}
	
	getch();
}
