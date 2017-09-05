#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Uma	empresa	quer	verificar	se	um	empregado	está	qualificado	para	a	aposentadoria	ou	não.	
Para	estar	em	condições,	um	dos	seguintes	requisitos	deve	ser	satisfeito:
- Ter	no	mínimo	65	anos	de	idade.	
- Ter	trabalhado	no	mínimo	30	anos.	
- Ter	no	mínimo	60	anos	e	ter	trabalhado	no	mínimo	25	anos.
Com	base	nas	informações	acima,	faça	um	programa	que	leia:	o	número	do	empregado	
(código),	o	ano	de	seu	nascimento	e	o	ano	de	seu	ingresso	na	empresa.	O	programa	deverá	
escrever	a	idade	e	o	tempo	de	trabalho	do	empregado	e	a	mensagem	'Requerer	aposentadoria'	
ou	'Não	requerer'.*/

int main(){
	int empregado, ano_nascimento, ano_ingresso, anos_trabalhados, ano_atual,idade;
	
	printf("Informe o codigo do empregado: ");
	scanf("%d", &empregado);
	printf("Informe o ano do nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Informe o ano de ingresso: ");
	scanf("%d", &ano_ingresso);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	
	anos_trabalhados = ano_atual - ano_ingresso;
	idade = ano_atual - ano_nascimento;
	
	if((idade>=65) || (anos_trabalhados>=30) || (idade>=60 && anos_trabalhados>=25)){
		printf("Requerer aposentadoria");
	}
	else
		printf("Não	requerer");	
	
	system("Pause");
}
