#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de	ler	um	numero	X	e	mostrar	na	tela	se	o	número	
não	pertence	ao	seguinte	intervalo:	15<x<100;*/


main(){
 
	float num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	if(num>15 && num<100){
	}
	else{
		printf("Este numero nao pertence ao intervalo 15<x<100");
	}
   
	getchar();
}
