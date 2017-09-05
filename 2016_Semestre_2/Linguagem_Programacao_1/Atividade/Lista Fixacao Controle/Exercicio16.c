#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*. O	mesmo	exercício	anterior,	mas	agora	não	será	informado	o	número	de	mercadorias	em	
estoque.	Então	o	funcionamento	deverá	ser	da	seguinte	forma:	ler	o	valor	da	mercadoria	e	
perguntar	‘MAIS	MERCADORIAS	(S/N)?’.	Ao	final,	imprimir	o	valor	total	em	estoque	e	a	média	
de	valor	das	mercadorias	em	estoque.*/


main(){
 
    int total = 0, i=1; 
	float valor[100], val_total = 0, val_media;
    char opt;
    
    while(opt != 'N'){
		printf("Informe o valor da mercadoria: ");
    	scanf("%f", &valor[i]);
    	printf("Mais mercadorias (S/N)? ");
    	scanf("%s", &opt);
    	val_total = val_total + valor[i];
    	i++;
    	total += 1;
	}
	
	val_media = val_total / total;
	
	printf("Valor total em estoque: %.2f\n", val_total);
	printf("Valor medio das mercadorias: %.2f\n", val_media);
    
	getchar();
}
