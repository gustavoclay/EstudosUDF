#include <stdio.h>

//Crie uma função em C que receba 2 números  inteiros e retorne o maior valor.

int MaiorValor(int a, int b){
	if(a>=b){
		return a;
	}
	else if(b>a){
		return b;
	}
}

int main(void){
	int a,b, maior;
	
	printf("num: ");
	scanf("%d", &a);
	printf("num: ");
	scanf("%d", &b);

	maior = MaiorValor(a,b);
	
	printf("Maior: %d", maior);
	

	system("Pause");
	return 0;	
}
