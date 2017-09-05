#include <stdio.h>
#include <math.h>

int main(){
// Algoritmo para calcular a formula de Equação do segundo grau através da formula de Bhaskara

	//Variaveis
	float vlrA, vlrB, vlrC, vlrDelta, vlrResult1, vlrResult2;
	
	//inicio
	printf ("Calcular equação do segundo grau\n");
	printf ("ax^2+bx+c=0\n\n");
	
	//Recebe os valores da equação
	printf ("Digite o valor de \"a\": ");
	scanf ("%f", &vlrA);
	printf ("Digite o valor de \"b\": ");
	scanf ("%f", &vlrB);
	printf ("Digite o valor de \"c\": ");
	scanf ("%f", &vlrC);
	printf("\n\n");
	
	//calculando o Delta
	vlrDelta=(vlrB*vlrB)-(4*vlrA*vlrC);
	
	//calculando a equação atraves da formula de Bhaskara
	vlrResult1 = ((-vlrB) + sqrt(vlrDelta))/(2*vlrA);
	vlrResult2 = ((-vlrB) - sqrt(vlrDelta))/(2*vlrA);
	
	//exibi o valor de delta
	printf ("Delta = %.2f \n", vlrDelta);
	
	//Se o valor de delta negativo
	if (vlrDelta<0){
    printf ("nao ha raizes reais\n\n");             
    }
	
	//se o valor de delta for positivo
    if(vlrDelta >= 0){
    printf ("x' = %.2f \n",vlrResult1);
	printf ("x'' = %.2f \n",vlrResult2);
}

	printf ("\n\n");
	system ("pause");	
}       
