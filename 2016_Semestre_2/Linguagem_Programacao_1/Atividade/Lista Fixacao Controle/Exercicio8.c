#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C para	ler	2	valores	e	se	o	segundo	valor	informado	for	ZERO,	deve	ser	
lido	um	novo	valor,	ou	seja,	para	o	segundo	valor	não	pode	ser	aceito	o	valor	zero	e	imprimir	o	
resultado	da	divisão	do	primeiro	valor	lido	pelo	segundo	valor	lido.	Utilize	a	estrutura	FOR.*/

int main(){
	int num1, num2, i;
	
	printf("informe o numero: ");
	scanf("%d", &num1);
	printf("informe o numero: ");
	scanf("%d", &num2);
	
	for(i=0 ; num2 == 0; i++ ){
		printf("O valor não é valido. Informe um novo numero: ");
		scanf("%d", &num2);		
			}
	
	printf("Resultado: %d\n",(num1/num2));
	
	
	system("Pause");
}
