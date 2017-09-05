#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*questão 6 do posto*/

int main(){
	int litros = 0;
	float custo = 0;
	char combustivel;

	printf("Informe A para alcool e G para gasolina: ");
	scanf("%c", &combustivel);
	printf("Informe a quantidade de litros: ");
	scanf("%d", &litros);

	if(combustivel=='A'){
		if(litros <= 20)
			custo = litros * (2.90*0.97);
		else
			custo = litros * (2.90*0.95);
	}
	
	if(combustivel=='G'){
		if(litros <= 20)
			custo = litros * (3.30*0.96);
		else
			custo = litros * (3.30*0.94);
	}


	printf("Custo: %.2f R$ \n", custo);
	
	system("Pause");
}
