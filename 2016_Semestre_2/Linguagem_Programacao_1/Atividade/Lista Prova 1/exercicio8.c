#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Ler	3	valores	inteiros	(considere	que	serão	informados	3	valores	distintos)	e	escrever	a	
soma	dos	dois	maiores;*/


main(){
 
	int maior1=0, maior2=0, i, num[100];
	
	for(i=1; i<=3; i++){
		printf("numero: ");
		scanf("%d", &num[i]);
		
		if(num[i] > maior1){
			maior2 = maior1;
			maior1 = num[i];
		}
		else if(num[i] > maior2){
			maior2 = num[i];
		}
	}
	
	printf("Soma de %d e %d : %d", maior1, maior2, (maior1+maior2));
	getchar();
}
