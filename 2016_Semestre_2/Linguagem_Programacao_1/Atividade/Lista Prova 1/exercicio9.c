#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Fa�a	um	programa para	ler:	a	descri��o	do	produto	(nome),	a	quantidade	adquirida	e	o	
pre�o	unit�rio.	Calcular	e	escrever	o	total	(total	=	quantidade	adquirida	*	pre�o	
unit�rio),	o	desconto	e	o	total	a	pagar	(total	a	pagar	=	total	- desconto),	sabendo-se	que:
- Se	quantidade	<=	5	o	desconto	ser�	de	2%	
- Se	quantidade	>	5	e	quantidade	<=10	o	desconto	ser�	de	3%	
- Se	quantidade	>	10	o	desconto	ser�	de	5%*/


main(){
 
	int num1, num2, i;
	printf("Informe um numero: ");
	scanf("%d", &num1);
	printf("Informe um numero: ");
	scanf("%d", &num2);
			
	for (i=num1+1; i<num2 ; i++){	
		printf("%d ",i);
	}
	getchar();
}
