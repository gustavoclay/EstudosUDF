#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C para	ler	2	valores	e	se	o	segundo	valor	informado	for	ZERO,	deve	ser	
lido	um	novo	valor,	ou	seja,	para	o	segundo	valor	não	pode	ser	aceito	o	valor	zero	e	imprimir	o	
resultado	da	divisão	do	primeiro	valor	lido	pelo	segundo	valor	lido.	Utilize	a	estrutura	WHILE.*/

int main(){
	int num[100], i;
	
	for(i=0 ; i<2; i++){
		printf("informe o numero: ");
		scanf("%d", &num[i]);
		while(num[1] == 0){
			printf("O valor não é valido. Informe um novo numero: ");
			scanf("%d", &num[1]);	
		}
	}
	
	printf("Resultado: %d\n",(num[0]/num[1]));
	
	
	system("Pause");
}
