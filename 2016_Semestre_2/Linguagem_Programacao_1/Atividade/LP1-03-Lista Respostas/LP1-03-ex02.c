/*
Escreva	um	programa	em	C	capaz	de	ler	o	ano	atual
	e	o	ano	de	nascimento	de	uma	pessoa.	
Escrever	uma	mensagem	que	diga	se	ela	poderá	
ou	não	votar	este	ano	(não	é	necessário	
considerar	o	mês	em	que	a	pessoa	nasceu).
*/

#include <stdio.h>

main() {
	int anoAtual, anoNasc, idade;
	
	scanf("%d%d",&anoAtual, &anoNasc);
	
	idade = anoAtual - anoNasc;
	
	if (idade>16)  {
		printf("Pode votar!");
		if ((idade>18) && (idade<60)) {
			printf("Obs: Voto Obrigatorio");
		}
	} else {
		printf("Nao pode votar!");
	}
	
	getchar();
	
	
	
	
	
	
	
	
	
}
