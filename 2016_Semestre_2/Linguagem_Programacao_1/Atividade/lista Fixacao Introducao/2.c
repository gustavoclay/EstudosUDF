#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* Escreva	um	programa	em	C que	armazene	o	valor	10	em	uma	vari�vel	A	e	o	valor	20	
em	uma	vari�vel	B.	A	seguir	(utilizando	apenas	atribui��es	entre	vari�veis)	troque	os	
seus	conte�dos	 fazendo	com	que	o	valor	que	est�	em	A	passe	para	B	e	vice-versa.	Ao	
final,	escrever	os	valores	que ficaram	armazenados	nas	vari�veis. */
int main(){
    int A=10, B=20, aux;
    aux=A;
    A=B;
    B=aux;
    
    printf("A=%d  B=%d\n",A,B);
    
    system("Pause");   
}
