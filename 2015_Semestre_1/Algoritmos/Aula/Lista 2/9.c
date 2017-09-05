#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Criar	um	vetor	A	com	10	elementos	inteiros.	Implementar	um	programa	
que	defina	e	escreva	a	soma	de	todos	os	elementos	armazenados	neste	
vetor.*/
int main(){
	int i, Soma=0, A[20];
	
	srand(time(NULL));
	
	printf("-------Vetor------");
	for(i=1; i<=10; i++){
		A[i]=rand()%100;
		printf("\nPosicao %d: %d", i, A[i]);
		Soma=Soma+A[i];
		}
		
	printf("\nA soma de todos os elementos do vetor eh: %d",Soma);
	getch();
}
