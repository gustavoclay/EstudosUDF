#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Crie	um	programa	em	C	que	leia	20	n�meros	do	usu�rio,	armazenando-os	
em	um	vetor.	O	programa	deve	calcular	a	m�dia	dos	n�meros	digitados	e	
exibir	todos	os	n�meros	do	vetor	que	est�o	acima	da	m�dia.*/
int main(){
	int i, Num[20], Soma=0, Media=0;
	
	for(i=0; i<20; i++){
		printf("Digite um numero: ");
		scanf("%d", &Num[i]);
		Soma=Soma+Num[i];
	}
	Media=Soma/20;
	printf("\nMedia: %d", Media);
	printf("\nNumeros acima da media: ");	
	for(i=0; i<20; i++){
		if(Num[i]>Media){
			printf("\n%d", Num[i]);
		}
	}
	getch();
}
