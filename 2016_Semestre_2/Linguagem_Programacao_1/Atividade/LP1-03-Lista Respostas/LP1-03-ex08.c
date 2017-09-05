/*
Escreva	um	programa	em	C para	ler	2	valores	e	
se	o	segundo	valor	informado	for	ZERO,	deve	ser
lido	um	novo	valor,	ou	seja,	para	
o	segundo	valor	não	pode	ser	aceito	o	valor	
zero	e	imprimir	o	resultado	da	divisão	do
primeiro	valor	lido	pelo	segundo	valor	lido.
Utilize	a	estrutura	FOR.
*/

#include <stdio.h>

main() {
	float a, resultado;
	float b = 0;
	
	scanf("%f",&a);
	
	for(;b==0;) {
		scanf("%f",&b);
	}
	
	resultado = a/b;
	printf("%f", resultado);
	
}







