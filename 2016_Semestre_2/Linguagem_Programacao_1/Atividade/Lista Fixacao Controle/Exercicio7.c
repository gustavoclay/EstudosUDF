#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Uma	empresa	quer	verificar	se	um	empregado	est�	qualificado	para	a	aposentadoria	ou	n�o.	
Para	estar	em	condi��es,	um	dos	seguintes	requisitos	deve	ser	satisfeito:
- Ter	no	m�nimo	65	anos	de	idade.	
- Ter	trabalhado	no	m�nimo	30	anos.	
- Ter	no	m�nimo	60	anos	e	ter	trabalhado	no	m�nimo	25	anos.
Com	base	nas	informa��es	acima,	fa�a	um	programa	que	leia:	o	n�mero	do	empregado	
(c�digo),	o	ano	de	seu	nascimento	e	o	ano	de	seu	ingresso	na	empresa.	O	programa	dever�	
escrever	a	idade	e	o	tempo	de	trabalho	do	empregado	e	a	mensagem	'Requerer	aposentadoria'	
ou	'N�o	requerer'.*/

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
		printf("N�o	requerer");	
	
	system("Pause");
}
