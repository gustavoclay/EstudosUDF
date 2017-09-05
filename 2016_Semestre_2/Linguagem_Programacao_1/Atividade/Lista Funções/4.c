#include <stdio.h>

//CCrie uma função em C que receba 2 números inteiros e retorne o menor valor.

int MenorValor(int a, int b){
	if(a<=b){
		return a;
	}
	else if(b<a){
		return b;
	}
}

int main(void){
	int a,b, menor;
	
	printf("num: ");
	scanf("%d", &a);
	printf("num: ");
	scanf("%d", &b);

	menor = MenorValor(a,b);
	
	printf("Menor: %d", menor);
	

	system("Pause");
	return 0;	
}
