#include <stdio.h>

int soma(int n){
	if(n<0){
		printf("numero negativo");
	}
	else{
		while(n>0)
		return n + soma(n-1);
	}
}

int main(void){
	int n, total=0;
	
	printf("Numero: ");
	scanf("%d", &n);
	total = soma(n);
	printf("Soma: %d", total);
}
