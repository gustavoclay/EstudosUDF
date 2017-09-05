#include <stdio.h>
#include <string.h>
#include <conio.h>

//Elabore um algoritmo que leia nome, idade e sexo de 20 pessoas. Imprimir o nome, se a pessoa for do sexo masculino, e tiver mais de 21 anos.

int main()
{	
	char Nome[20][100];
	int i, Sexo[20], Idade[20];
	
	for(i=0; i<20; i++){
		printf("Digite o nome do cliente: ");
		scanf("%s",Nome[i]);
		printf ("Digite: [1] PARA MASCULINO / [2] PARA FEMININO: ");
		scanf ("%d",&Sexo[i]);
		printf ("Digite a Idade: \n\n");
		scanf ("%d",&Idade[i]);
	}
	
	for(i=0; i<20; i++){
		if((Sexo[i]==1) && (Idade[i]>21)){
			printf("%s\n",Nome[i]);
		}
	}
	getch();
}
