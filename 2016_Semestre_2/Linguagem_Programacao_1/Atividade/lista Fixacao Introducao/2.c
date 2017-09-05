#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* Escreva	um	programa	em	C que	armazene	o	valor	10	em	uma	variável	A	e	o	valor	20	
em	uma	variável	B.	A	seguir	(utilizando	apenas	atribuições	entre	variáveis)	troque	os	
seus	conteúdos	 fazendo	com	que	o	valor	que	está	em	A	passe	para	B	e	vice-versa.	Ao	
final,	escrever	os	valores	que ficaram	armazenados	nas	variáveis. */
int main(){
    int A=10, B=20, aux;
    aux=A;
    A=B;
    B=aux;
    
    printf("A=%d  B=%d\n",A,B);
    
    system("Pause");   
}
