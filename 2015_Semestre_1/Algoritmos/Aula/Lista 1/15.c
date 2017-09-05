#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que imprima todos os números de 100 a 200, e ao final a soma deles. 

int main()
{
	//variaveis
	int vlrNumero, vlrSoma=0;
	
	//processamento e resultado
	for (vlrNumero=100;vlrNumero<=200;vlrNumero++)
	{
		vlrSoma=vlrSoma + vlrNumero;
		printf("%d\n",vlrNumero);
	}
	
	//soma
	printf("A soma de todos eh: %d\n",vlrSoma);
	getch();
}
