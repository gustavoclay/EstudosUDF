#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*As	maçãs	custam	R$	1,30	cada	se	forem	compradas	menos	de	uma	dúzia,	e	R$	1,00	se	forem	
compradas	pelo	menos	12.	Escreva	um	programa	que	leia	o	número	de	maçãs	compradas,	
calcule	e	escreva o	custo	total	da	compra*/

int main(){
	int qtd = 0;
	float prc = 0;
	
	printf("Quantidade de macas: ");
	scanf("%d",&qtd);
	if(qtd<12)
		prc=1.30;
	else
		prc=1.00;
	printf("Custo total: %.2f",(qtd*prc));
	
	
}
