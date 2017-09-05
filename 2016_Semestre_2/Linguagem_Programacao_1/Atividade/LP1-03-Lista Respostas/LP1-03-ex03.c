/*Escreva	um	programa	em	C	capaz	de ler	
a	hora	de	início	e	a	hora	de	fim	de	um	
jogo	de	Xadrez	(considere	apenas	horas	inteiras,	
sem	os	minutos)	e	calcule	a	duração	do	jogo	em	horas,	
sabendo-se	que	o	tempo	máximo	de	duração	do	jogo
	é	de	24	horas	e	que	o	jogo	pode	iniciar	em	
um	dia	e	terminar	no	dia	seguinte. */

#include <stdio.h>

main() {
	int inicio, final, total;	
	
	scanf("%d%d",&inicio,&final);
	
	if (inicio<final) {
		total = final-inicio;		
	} else {
		total = final-inicio+24;
	}
	
	printf("\t%d", total);
	getchar();
	
}















