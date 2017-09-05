#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	capaz	de	ler	10	números	do	usuário	e	imprimir	o	dobro	de	cada	
um	deles.*/


main(){
 
	int num, i;
	
	for (i=0; i<10 ; i++){
		printf("Informe um numero: ");
		scanf("%d", &num);
		printf("Dobro: %d\n",num*2);
	}
	getchar();
}
