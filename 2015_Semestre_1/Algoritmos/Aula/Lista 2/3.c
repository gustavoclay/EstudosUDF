#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Crie	um	programa	em	C	que	pe�a	10	n�meros,	armazene	eles	em	um	
//vetor	e	diga	qual	�	o	menor	elemento	e	seu	valor

int main(){
	
	int i, Num[10], Min=999999999;
	
	for(i=0; i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &Num[i]);
		if(Num[i]<Min){
			Min=Num[i];
		}
	}
	
	printf("\nO menor elemento eh: %d", Min);
	
	getch();
}
