/*
Escreva	um	programa	em	C	capaz	de ler	3	valores	
(A,	B	e	C)	representando	as	medidas	dos	
lados	de	um	tri�ngulo	e	escrever	se	
formam	ou	n�o	um	tri�ngulo.	OBS:	para	formar	um	
tri�ngulo,	o	valor	de	cada	lado	deve	
ser	menor	que	a	soma	dos	outros	2	lados.
*/
#include <stdio.h>
main() {
	int a, b, c;
	
	scanf("%d%d%d",&a,&b,&c);
	
	if ( (a<b+c) && (b<a+c) && (c<a+b)) {
		printf("Os lados formam um triangulo");	
	} else {
		printf("Os lados NAO formam um triangulo");	
	}
	
	getchar();
	
	
}


















