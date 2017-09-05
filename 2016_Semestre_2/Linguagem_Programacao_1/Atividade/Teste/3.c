#include <stdio.h>

int primo(int n){
	int i, aux=1;
	for (i=2; i<n; i++){
		if(num % i == 0) {
			aux = 0;
			break;
		}
	}
	return (aux);
}

int main(void){
	int n, total;
	
	printf("numero: ");
	scanf("%d", &n);
	
	return 0;
}
