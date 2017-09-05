/*
A	jornada	de	trabalho	semanal	de	um	funcionário	é	de	40	horas.	O	funcionário	que	
trabalhar	mais	de	40	horas	receberá	hora	
extra,	cujo	cálculo	é	o	valor	da	hora	regular	com	
um	acréscimo	de	50%.	Escreva	um	programa	em	C que
leia	o	número	de	horas	trabalhadas	em	um	mês,	o	
salário	por	hora	e	escreva	o	salário	total	do	
funcionário,	que	deverá	ser	acrescido	das	horas	extras,
caso	tenham	sido	trabalhadas	
(considere	que	o	mês	possua	4	semanas	exatas).
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











