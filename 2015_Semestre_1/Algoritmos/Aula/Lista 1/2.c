#include <stdio.h>

main(){
	
	//Desenvolva um algoritmo que classifique um número de entrada fornecido pelo usuário como par ou ímpar.
	
	int A, B;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &A);
	
	B = A % 2;
	
	if (B == 0){
		printf ("%d eh um numero par\n",A);	
	}
	else{
		printf ("%d eh um numero impar\n",A);
	}
	
	printf ("\n\n");
	system ("pause");
}
