#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Elabore um algoritmo que leia um número de entrada que indicará a quantidade de números a serem lidos.
Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada um.*/

int main()
{
	//variaveis
	int vlrQtd, vlrTpl, vlrNum;
	
	//recebe o numero que indicará a quantidade de numeros a serem lidos.
	printf("digite um numero: ");
	scanf("%d",&vlrQtd);
	
	//estrutura de repetição em cima do calculo usando for
	for(vlrNum=0;vlrNum<=vlrQtd;vlrNum++)
	{
		vlrTpl=(vlrNum*3);
		printf("%d\n",vlrTpl);
	}
	
	getch();
}
