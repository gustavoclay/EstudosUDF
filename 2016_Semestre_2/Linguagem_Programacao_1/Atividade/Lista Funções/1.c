#include <stdio.h>

//Crie uma função em C que receba um valor e informe se ele é positivo ou não.

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
