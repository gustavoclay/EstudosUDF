#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de ler	a	hora	de	in�cio	e	a	hora	de	fim	de	um	jogo	de	Xadrez	
(considere	apenas	horas	inteiras,	sem	os	minutos)	e	calcule	a	dura��o	do	jogo	em	horas,	
sabendo-se	que	o	tempo	m�ximo	de	dura��o	do	jogo	�	de	24	horas	e	que	o	jogo	pode	iniciar	em	
um	dia	e	terminar	no	dia	seguinte.*/

int main(){
	int inicio, final, total;
	
	printf("Informe o inicio e final: ");
	scanf("%d%d", &inicio, &final);
	
	if(inicio<final)
		total=final-inicio;
	else
		total=final - inicio + 24;
	
	printf("Total: %d\n",total);
		
		
	system("Pause");
	
	
}
