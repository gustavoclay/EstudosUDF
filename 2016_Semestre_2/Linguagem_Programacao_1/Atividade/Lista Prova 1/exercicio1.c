#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de	ler	um	número	X	e	mostrar	na	tela	se	o	numero	
pertence	a	um	dos	seguintes	intervalos:- 1<x<	1	ou	20<x<30;*/


main(){
 
	float num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	if(num>(-1) && num<1 ){
		printf("Este numero pertence ao intervalo -1<x<1");
	}
	
	else if(num>20 && num<30 ){
		printf("Este numero pertence ao intervalo 20<x<30");
	}
	
   
	getchar();
}
