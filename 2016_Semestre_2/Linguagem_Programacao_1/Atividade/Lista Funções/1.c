#include <stdio.h>

//Crie uma fun��o em C que receba um valor e informe se ele � positivo ou n�o.

int paridade(int num){
	if (num>0){
		printf("Positivo\n");
	}
	else if (num==0){
		printf("Neutro\n");
	}
	else{
		printf("Negativo\n");
	}
}

int main(void){
	int num;
	
	printf("numero: ");
	scanf("%d", &num);
	
	paridade(num);
	
	system("Pause");
	return 0;	
}
