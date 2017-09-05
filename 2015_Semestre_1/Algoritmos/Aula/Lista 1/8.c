#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e 90, ou não.

int main(){
	setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
	
	//variaveis
	float vlrNum;
	
	//recebe o valor do usuário
	printf ("Digite um número:");
	scanf ("%f",&vlrNum);
	
	//verifica se o número está compreendido entre 20 e 90
	if (vlrNum<=90 && vlrNum>=20){
		printf("O número %.1f está compreendido entre 20 e 90.", vlrNum);
	}
	else {
		printf("O número %.1f não está compreendido entre 20 e 90.", vlrNum);
	}
	
	getch();
}
