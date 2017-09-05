#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de	ler	o	ano	atual	e	o	ano	de	nascimento	de	uma	pessoa.	
Escrever	uma	mensagem	que	diga	se	ela	poderá	ou	não	votar	este	ano	(não	é	necessário	
considerar	o	mês	em	que	a	pessoa	nasceu).*/

int main(){
	int ano_atual, ano_nasc, idade;
	
	printf("Informe o ano atual: ");
	scanf("%d",&ano_atual);
	printf("Informe o ano do seu nascimento: ");
	scanf("%d",&ano_nasc);
	idade=ano_atual - ano_nasc;
	if(idade<16)
		printf("Você não está apto a votar.\n");
	else if(idade=16 || idade<18)
		printf("Você está apto a votar, porém, o voto é optativo.\n");
	else
		printf("Você está apto a votar e o voto é obrigatório.\n");
		
		
	system("Pause");
	
	
}
