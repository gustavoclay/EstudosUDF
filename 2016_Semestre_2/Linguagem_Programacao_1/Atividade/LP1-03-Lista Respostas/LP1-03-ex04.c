/*
A	jornada	de	trabalho	semanal	de	um	funcion�rio	�	de	40	horas.	O	funcion�rio	que	
trabalhar	mais	de	40	horas	receber�	hora	
extra,	cujo	c�lculo	�	o	valor	da	hora	regular	com	
um	acr�scimo	de	50%.	Escreva	um	programa	em	C que
leia	o	n�mero	de	horas	trabalhadas	em	um	m�s,	o	
sal�rio	por	hora	e	escreva	o	sal�rio	total	do	
funcion�rio,	que	dever�	ser	acrescido	das	horas	extras,
caso	tenham	sido	trabalhadas	
(considere	que	o	m�s	possua	4	semanas	exatas).
*/

#include <stdio.h>

main() {
	int horasTotal, horasExt;
	float acrescimo, custoHora, salTotal;
	
	scanf("%d%f",&horasTotal,&custoHora);
	
	horasExt = horasTotal - 160;
	
	if(horasExt>0) {
		acrescimo = horasExt * custoHora * 1.5;
		salTotal = 160 * custoHora + acrescimo;
	} else {
		salTotal = horasTotal * custoHora;	
	}
	
	printf("%.2f", salTotal);
	getchar();
	
		
	
}











