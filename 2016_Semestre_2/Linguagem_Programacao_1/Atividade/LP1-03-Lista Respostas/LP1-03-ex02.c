/*
Escreva	um	programa	em	C	capaz	de	ler	o	ano	atual
	e	o	ano	de	nascimento	de	uma	pessoa.	
Escrever	uma	mensagem	que	diga	se	ela	poder�	
ou	n�o	votar	este	ano	(n�o	�	necess�rio	
considerar	o	m�s	em	que	a	pessoa	nasceu).
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
