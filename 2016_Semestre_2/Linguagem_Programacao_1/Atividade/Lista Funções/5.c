#include <stdio.h>

//Crie uma fun��o em C que receba 3 n�meros inteiros e retorne o maior valor, use a fun��o da quest�o 3.

int MaiorValor(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else if(c>a && c>b){
		return c;
	}
}

int main(void){
	int a, b, c, maior;
	
	printf("num: ");
	scanf("%d", &a);
	printf("num: ");
	scanf("%d", &b);
	printf("num: ");
	scanf("%d", &c);

	maior = MaiorValor(a,b,c);
	
	printf("Maior: %d", maior);
	

	system("Pause");
	return 0;	
}
