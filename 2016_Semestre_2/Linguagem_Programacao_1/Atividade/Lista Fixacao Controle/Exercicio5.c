#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C	capaz	de ler	3	valores	(A,	B	e	C)	representando	as	medidas	dos	
lados	de	um	tri�ngulo	e	escrever	se	formam	ou	n�o	um	tri�ngulo.	OBS:	para	formar	um	
tri�ngulo,	o	valor	de	cada	lado	deve	ser	menor	que	a	soma	dos	outros	2	lados.*/

int main(){
	int A,B,C;

	printf("Informe as medidas dos lados do triangulo: ");
	scanf("%d%d%d", &A, &B, &C);

	if((A < B+C) && (B < B+A) && (C < A+B)){
		printf("as medidas informadas formam um triangulo.\n");
	}
	else{
		printf("as medidas informadas n�o formam um triangulo.\n");
	}
	
	system("Pause");
}
