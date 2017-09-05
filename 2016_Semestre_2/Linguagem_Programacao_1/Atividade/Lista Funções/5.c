#include <stdio.h>

//Crie uma função em C que receba 3 números inteiros e retorne o maior valor, use a função da questão 3.

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
