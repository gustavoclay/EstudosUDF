#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Elabore um algoritmo que leia um número e imprima todos os números de 1 até o número lido, e também o seu produto. Exemplo: Número: 3 Saída: 1 2 3 Produto: 6
 
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
