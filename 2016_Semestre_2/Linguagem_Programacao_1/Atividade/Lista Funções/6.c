#include <stdio.h>

//CCrie uma fun��o em C que receba 3 n�meros inteiros e retorne o menor valor, use a fun��o da quest�o 4.

int MenorValor(int a, int b, int c){
	if(a<b && a<c){
		return a;
	}
	else if(b<a && b<c){
		return b;
	}
	else if(c<a && c<b){
		return c;
	}
}

int main(void){
	int a, b, c, menor;
	
	printf("num: ");
	scanf("%d", &a);
	printf("num: ");
	scanf("%d", &b);
	printf("num: ");
	scanf("%d", &c);

	menor = MenorValor(a,b,c);
	
	printf("Menor: %d", menor);
	

	system("Pause");
	return 0;	
}
