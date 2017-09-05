#include <stdio.h>

main(){
	
	//Elabore um algoritmo que leia dois números inteiros e efetue a adição; caso o resultado seja maior que 10, imprima-o.
	
	int A, B, C;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &A);
	printf ("Digite outro numero inteiro: ");
	scanf ("%d", &B);
	
	C = A + B;
	
	if (C > 10){
		printf ("A soma destes numeros eh %d\n",C);	
	}
	
	printf ("\n\n");
	system ("pause");
}
