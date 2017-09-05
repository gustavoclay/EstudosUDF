#include <stdio.h>
#include <math.h>

main(){
	
	//Elabore um algoritmo que leia um número e, se ele for positivo, imprima a metade desse número, caso contrário imprima o número ao quadrado.
	
	float A, B, C;
	
	printf ("Digite um numero: ");
	scanf ("%f", &A);
	
	B = A / 2;
	C = pow(A,2);
	
	if (A > 0){
		printf ("a metade de %.1f eh %.1f",A,B);	
	}
	if (A < 0){
		printf ("O quadrado de %.1f eh %.1f\n",A,C);
	}
	
	printf ("\n\n");
	system ("pause");
}
