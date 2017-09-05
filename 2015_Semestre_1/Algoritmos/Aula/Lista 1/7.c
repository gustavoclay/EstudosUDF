#include <stdio.h>
#include <stdlib.h>


main(){
	
//Elabore um algoritmo que leia o nome e o peso (em real) de duas pessoas e imprima os dados da pessoa mais pesada.

	float PesoNome1, PesoNome2;
	char Nome1[20], Nome2[20];
	
	printf ("-------------------QUEM EH MAIS PESADO?-------------------\n\n");
	
	//recebe nome e peso da pessoa 1
	
	printf ("Digite o nome: ");
	scanf ("%s", &Nome1);
	printf ("\n");
	printf ("Digite o peso: ");
	scanf ("%f", &PesoNome1);
	printf ("\n");
	
	//recebe nome e peso da pessoa 2
	
	printf ("Digite o nome: ");
	scanf ("%s", &Nome2);
	printf ("\n");
	printf ("Digite o peso: ");
	scanf ("%f", &PesoNome2);
	printf ("\n");
	
	//realiza a comparação de peso e imprimi o mais pesado
	
	if(PesoNome1 > PesoNome2){
		printf ("%s eh mais pessado que %s \n", Nome1, Nome2);
	}
	else if(PesoNome1 < PesoNome2){
		printf ("%s eh mais pessado que %s \n", Nome2, Nome1);
	}
	else{
		printf ("%s e %s possuem o mesmo peso \n", Nome2, Nome1);
	}
	
	printf ("\n\n");
	system ("pause");
}

