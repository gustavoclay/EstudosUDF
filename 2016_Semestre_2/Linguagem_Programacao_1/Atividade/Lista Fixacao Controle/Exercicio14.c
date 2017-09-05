#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	em	C para	ler	10	números.	Todos	os	números	lidos	com	valor	inferior	a	
40	devem	ser	somados.	Escreva	o	valor	final	da	soma	efetuada.*/


main(){
 
    int n, i, soma=0;
    
    for (i = 0; i < 10; i++){
    	scanf("%d",&n);
    	if(n<40){
    		soma+=n;
		}
    }
    
    printf("resultado: %d",soma);
    
	getchar();
}
