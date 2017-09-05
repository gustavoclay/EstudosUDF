#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	capaz	de	ler	dois	números	N1	e	N2	e	imprimir	todos	os	números	
inteiros	entre	N1	e	N2;*/


main(){
 
	int num1, num2, i;
	printf("Informe um numero: ");
	scanf("%d", &num1);
	printf("Informe um numero: ");
	scanf("%d", &num2);
			
	for (i=num1+1; i<num2 ; i++){	
		printf("%d ",i);
	}
	getchar();
}
