#include <stdio.h>



main(){
	
	// Algoritmo que solicita a temperatura em celsius e mostra em fahrenheit
	
	// Variaveis
	int vlrCelsius;
	float vlrFahrenheit;
	
	//inicio
	printf ("-------------------Celsius > fahrenheit-------------------\n\n");
	
	//Recebe valor em celsius
	printf ("Digite a temperatura em graus Celsius: ");
	scanf ("%d", &vlrCelsius);
	
	//Transforamção dos valores - Celsius para fahrenheit
	vlrFahrenheit = (vlrCelsius * 1.8) + 32;
	
	//Exibi o resultado
	printf ("\n%d graus em Celsius equivale a %.1f graus em Fahrenheit", vlrCelsius, vlrFahrenheit);
	
	
	printf ("\n\n");
	system ("pause");	
}
