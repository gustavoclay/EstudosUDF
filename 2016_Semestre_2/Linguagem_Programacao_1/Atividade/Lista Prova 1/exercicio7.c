#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	programa	capaz	de	ler	3	n�meros	do	usu�rio	e	imprim�-los	em	ordem	
crescente.*/


main(){
 
	int aux, j, i ,num[100];
	
	for(i=1; i<=3; i++){
		printf("numero: ");
		scanf("%d", &num[i]);
	}
	
	for(i=1; i<=3; i++){
		for(j=i+1; j<=3; j++){
			if(num[i] > num[j]){
				aux=num[i];
				num[i]=num[j];
				num[j]=aux;	
				
			}
		}
	}
			
	for(i=1; i<=3; i++){
		printf("%d ",num[i]);
	}
	
	getchar();
}
