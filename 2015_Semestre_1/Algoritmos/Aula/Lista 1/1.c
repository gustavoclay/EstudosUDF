#include <stdio.h>

main(){
	
	//Elabore um algoritmo que leia um número e imprima uma das mensagens: é múltiplo de 3, ou, não é múltiplo de 3.
	
	int A, B;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &A);
	
	B = A % 3;
	
	if (B == 0){
		printf ("%d eh multiplo de 3\n",A);	
	}
	else{
		printf ("%d nao eh multiplo de 3\n",A);
	}
	
	printf ("\n\n");
	system ("pause");
}
