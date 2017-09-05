#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Criar	um	vetor	A	com	10	elementos	inteiros.	Implementar	um	programa	
que	defina	e	escreva	a	quantidade	de	elementos	armazenados	neste	vetor	
que	são	pares.*/
int main(){
	int i, Par=0, A[20];
	
	srand(time(NULL));
	
	printf("-------Vetor------");
	for(i=1; i<=10; i++){
		A[i]=rand()%100;
		printf("\nPosicao %d: %d", i, A[i]);
			if((A[i]%2)==0){
				Par=Par+1;
			}
		}
		
	printf("\nA quantidade de elementos pares do vetor eh: %d",Par);
	getch();
}
