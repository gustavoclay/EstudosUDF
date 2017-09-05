#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Uma	loja	está	levantando	o	valor	total	de	todas	as	mercadorias	em	estoque.	Escreva	um	
programa	em	C que	permita	a	entrada	das	seguintes	informações:	a)	o	número	total	de	
mercadorias	no	estoque;	b)	o	valor	de	cada	mercadoria.	Ao	final	imprimir	o	valor	total	em	
estoque	e	a	média	de	valor	das	mercadorias.*/


main(){
 
    int total, i; 
	float valor[100], val_total = 0, val_media;
    
    printf("Informe o numero total de mercadorias no estoque: ");
    scanf("%d", &total);
    
    for(i=1; i<=total; i++) {
		printf("Informa o valor da mercadoria: ");
    	scanf("%f", &valor[i]);
    	val_total = val_total + valor[i];
	}
	
	val_media = val_total / total;
	
	printf("Valor total em estoque: %.2f\n", val_total);
	printf("Valor medio das mercadorias: %.2f\n", val_media);
    
	getchar();
}
