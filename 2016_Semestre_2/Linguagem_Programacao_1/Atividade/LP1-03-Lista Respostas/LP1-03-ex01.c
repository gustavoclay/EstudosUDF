/*
As	ma��s	custam	R$	1,30	cada	se	forem	compradas	menos	de	uma	d�zia,	e	R$	1,00	
se	forem	compradas	pelo	menos	12.	Escreva	um	programa	que	leia	o	n�mero	de	ma��s
compradas,	calcule	e	escreva o	custo	total	da	compra.
*/

#include <stdio.h>

main() {
	int macas;
	float custo;
	
	scanf("%d",&macas);
	
	if (macas>=12) {
		custo = macas * 1;
	} else {
		custo = macas * 1.3;
	}
	
	printf("%f", custo);
	getchar();
}








