#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se s�o iguais.

int main(){
	setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
	
	//variaveis
	int vlrN1,vlrN2;
	
	//recebe os valores do usu�rio
	printf ("Digite um n�mero:");
	scanf ("%d",&vlrN1);
	printf ("Digite outro n�mero:");
	scanf ("%d",&vlrN2);
	
	//verifica qual � o numero maior, menos ou se s�o iguais e mostra na tela
	if (vlrN1>vlrN2){
		printf("%d � maior que %d", vlrN1,vlrN2);
	}
	if (vlrN2>vlrN1){
		printf("%d � maior que %d", vlrN2,vlrN1);
	}
	if (vlrN1==vlrN2){
		printf("%d � igual a %d", vlrN1,vlrN2);
	}
	
	getch();
}
