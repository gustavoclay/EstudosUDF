#include <stdio.h>

main(){
	
	//Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade desse n�mero.
	
	float A, B, C;
	
	printf ("Digite um numero: ");
	scanf ("%f", &A);
	
	C = 20;
	B = A / 2;
	
	if (A > C){
		printf ("%.1f",B);	
	}
	
	printf ("\n\n");
	system ("pause");
}
