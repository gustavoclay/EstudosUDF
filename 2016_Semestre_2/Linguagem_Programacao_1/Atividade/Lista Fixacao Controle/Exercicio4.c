#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*A	jornada	de	trabalho	semanal	de	um	funcion�rio	�	de	40	horas.	O	funcion�rio	que	trabalhar	
mais	de	40	horas	receber�	hora	extra,	cujo	c�lculo	�	o	valor	da	hora	regular	com	um	acr�scimo	
de	50%.	Escreva	um	programa	em	C que	leia	o	n�mero	de	horas	trabalhadas	em	um	m�s,	o	
sal�rio	por	hora	e	escreva	o	sal�rio	total	do	funcion�rio,	que	dever�	ser	acrescido	das	horas	
extras,	caso	tenham	sido	trabalhadas	(considere	que	o	m�s	possua	4	semanas	exatas).*/

int main(){
	int horas_total = 0,hora_extra = 0;
	float salario_hora_extra = 0,salario_hora = 0, salario_total = 0;
	
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%d", &horas_total);
	printf("Informe o valor do salario por hora: ");
	scanf("%f", &salario_hora);
	
	hora_extra = horas_total - 160;
	
	if(hora_extra>0){
		salario_hora_extra = hora_extra * salario_hora * 1.5;
		salario_total = 160 * salario_hora + salario_hora_extra;
	}
	else{
		salario_total = horas_total * salario_hora;
	}
	
	
	printf("Salario total: %.2f\n", salario_total);	
		
	system("Pause");
	
	
}
