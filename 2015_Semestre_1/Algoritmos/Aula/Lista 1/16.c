#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que leia um n�mero e imprima todos os n�meros de 1 at� o n�mero lido, e tamb�m o seu produto. Exemplo: N�mero: 3 Sa�da: 1 2 3 Produto: 6
 
int main()
{
	//variaveis
	int vlrContador, vlrNumero, vlrProduto;
	
	//recebe entrada
	printf("Digite um numero: ");
	scanf("%d",&vlrNumero);
	printf("Numero: %d\n", vlrNumero);
	
	//processamento
	printf("Saida: \n");
	for (vlrContador=1; vlrContador<=vlrNumero; vlrContador++)
	{
		vlrProduto=(vlrProduto*vlrContador);
		printf("%d\n",vlrContador);
	}
	
	printf("Produto: %d\n",vlrProduto);
	getch();
}
