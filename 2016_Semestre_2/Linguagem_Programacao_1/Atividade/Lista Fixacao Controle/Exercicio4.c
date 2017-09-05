#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*A	jornada	de	trabalho	semanal	de	um	funcionário	é	de	40	horas.	O	funcionário	que	trabalhar	
mais	de	40	horas	receberá	hora	extra,	cujo	cálculo	é	o	valor	da	hora	regular	com	um	acréscimo	
de	50%.	Escreva	um	programa	em	C que	leia	o	número	de	horas	trabalhadas	em	um	mês,	o	
salário	por	hora	e	escreva	o	salário	total	do	funcionário,	que	deverá	ser	acrescido	das	horas	
extras,	caso	tenham	sido	trabalhadas	(considere	que	o	mês	possua	4	semanas	exatas).*/

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
