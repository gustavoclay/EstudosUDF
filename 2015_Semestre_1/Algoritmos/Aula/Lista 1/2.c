#include <stdio.h>

main(){
	
	//Desenvolva um algoritmo que classifique um n�mero de entrada fornecido pelo usu�rio como par ou �mpar.
	
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
