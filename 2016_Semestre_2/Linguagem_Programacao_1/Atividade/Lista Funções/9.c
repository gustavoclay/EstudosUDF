#include <stdio.h>

//CCrie uma função em C que receba 3 números inteiros e retorne o menor valor, use a função da questão 4.

int toCelsius(int fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}

int toFahrenheit(int celsius) {
    return celsius / 5 * 9 + 32;
}

int main (){

    int celsius    = 100;
    int fahrenheit = 212;
	
	printf("100º Celsius >>> %dº fahrenheit ",toFahrenheit(celsius) );
   	printf("212º Celsius >>> %dº fahrenheit ",toCelsius(fahrenheit));
   	
   	system("Pause");
    return 0;
}
