#include <stdio.h>

//Crie uma fun��o em C que receba 2 n�meros  inteiros e retorne o maior valor.

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
