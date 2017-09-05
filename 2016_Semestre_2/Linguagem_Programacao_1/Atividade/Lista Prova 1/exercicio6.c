#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	capaz	de	ler	um	número	N	do	usuário.	O	programa	deverá	ler	N	
números	do	usuário	e	ao	final,	mostrar quantos	foram	pares.*/


main(){
 
	int i, j, num, contador=0;
	printf("Informe a quantidade de numeros: ");
	scanf("%d", &j);
			
	for (i=0; i<j ; i++){	
		printf("numero: ");
		scanf("%d", &num);
		if((num%2) == 0){
			contador += 1;
		}
	}
	
	printf("Quantidade de numeros pares: %d", contador);
	getchar();
}
