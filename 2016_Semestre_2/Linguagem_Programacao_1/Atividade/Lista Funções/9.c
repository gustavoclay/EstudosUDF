#include <stdio.h>

//CCrie uma fun��o em C que receba 3 n�meros inteiros e retorne o menor valor, use a fun��o da quest�o 4.

int toCelsius(int fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}

int toFahrenheit(int celsius) {
    return celsius / 5 * 9 + 32;
}

int main (){

    int celsius    = 100;
    int fahrenheit = 212;
	
	printf("100� Celsius >>> %d� fahrenheit ",toFahrenheit(celsius) );
   	printf("212� Celsius >>> %d� fahrenheit ",toCelsius(fahrenheit));
   	
   	system("Pause");
    return 0;
}
