#include <stdio.h>



main(){
	
	// Algoritmo que solicita o raio de uma circunferência e mostre o diâmetro, comprimento e área
	
	// Variaveis
	float vlrR, vlrD, vlrC, vlrA, Pi=3.14;
	
	//inicio
	printf ("-------------------COMPRIMENTO DA CIRCUNFERENCIA E AREA DE UM CIRCULO-------------------\n\n");
	
	//Recebe valor em celsius
	printf ("Digite o valor do Raio: ");
	scanf ("%f", &vlrR);
	
	//Calculando o diametro
	vlrD = (2*vlrR);
	
	//Calculando o comprimento
	vlrC = (Pi*vlrD);
	
	//Calculando o área
	vlrA = (Pi*(vlrR*vlrR));
	
	//Exibir o resultado
	printf ("\nDiametro: %.2f\n", vlrD);
	printf ("\nComprimento da circunferencia: %.2f\n", vlrC);
	printf ("\nArea do circulo: %.2f\n", vlrA);
	
	//fim
	printf ("\n\n");
	system ("pause");	
}
