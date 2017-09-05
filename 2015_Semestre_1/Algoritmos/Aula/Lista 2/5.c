#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Crie	um	programa	em	C	que	leia	20	números	do	usuário,	armazenando-os	
em	um	vetor.	O	programa	deve	exibir	ao	final,	qual	a	média	dos	números,	
qual	o	maior	número	e	qual	o	menor.*/
int main(){
	int i, Num[20], Soma, Media, Maior=0, Menor=999999999;
	
	for(i=0; i<20; i++){
		printf("Digite um numero: ");
		scanf("%d", &Num[i]);
		if(Num[i]<Menor){
			Menor=Num[i];
		}
		if(Num[i]>Maior){
			Maior=Num[i];
		}
		Soma=Soma+Num[i];
	}
	
	Media=Soma/20;
	
	printf("\nMaior: %d", Maior);
	printf("\nMenor: %d", Menor);
	printf("\nMedia: %d", Media);
	
	getch();
}
