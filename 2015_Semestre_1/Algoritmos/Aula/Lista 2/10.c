#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Criar	um	vetor	A	com	10	elementos	inteiros.	Implementar	um	programa	
que	determine	a	soma	dos	elementos	armazenados	neste	vetor	que	são	
múltiplos	de	5.*/
int main(){
	int i, Soma=0, A[20], Aux;
	
	srand(time(NULL));
	
	printf("-------Vetor------");
	for(i=1; i<=10; i++){
		A[i]=rand()%10;
		printf("\nPosicao %d: %d", i, A[i]);
		Aux= A[i]%5;
		if(Aux==0){
			Soma=Soma+A[i];
		}
		}
		
	printf("\nA soma de todos os elementos multiplos de 5 do vetor eh: %d",Soma);
	getch();
}
