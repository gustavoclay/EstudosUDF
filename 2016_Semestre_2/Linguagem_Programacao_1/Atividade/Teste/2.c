#include <stdio.h>

int potencia(int b, int e){
	if(e==0){
		return 1;
	}
		return b * potencia(b,(e-1));
}

int main(void){
	int b, e, total;
	
	printf("base: ");
	scanf("%d", &b);
	printf("expoente: ");
	scanf("%d", &e);
	
	total = potencia(b,e);
	
	printf("Total: %d", total);
}
