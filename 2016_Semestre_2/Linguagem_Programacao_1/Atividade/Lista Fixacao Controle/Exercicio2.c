#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de	ler	o	ano	atual	e	o	ano	de	nascimento	de	uma	pessoa.	
Escrever	uma	mensagem	que	diga	se	ela	poder�	ou	n�o	votar	este	ano	(n�o	�	necess�rio	
considerar	o	m�s	em	que	a	pessoa	nasceu).*/

int main(){
	int ano_atual, ano_nasc, idade;
	
	printf("Informe o ano atual: ");
	scanf("%d",&ano_atual);
	printf("Informe o ano do seu nascimento: ");
	scanf("%d",&ano_nasc);
	idade=ano_atual - ano_nasc;
	if(idade<16)
		printf("Voc� n�o est� apto a votar.\n");
	else if(idade=16 || idade<18)
		printf("Voc� est� apto a votar, por�m, o voto � optativo.\n");
	else
		printf("Voc� est� apto a votar e o voto � obrigat�rio.\n");
		
		
	system("Pause");
	
	
}
