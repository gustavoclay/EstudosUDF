#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	capaz	de	ler	um	n�mero	N	do	usu�rio	e	imprimir	todos	os	
n�meros	inteiros	entre	0	e	N;*/


main(){
 
	int num, i;
	printf("Informe um numero: ");
	scanf("%d", &num);
			
	for (i=1; i<num ; i++){	
		printf("%d ",i);
	}
	getchar();
}
