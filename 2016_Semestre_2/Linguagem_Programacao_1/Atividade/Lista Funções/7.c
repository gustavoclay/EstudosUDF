#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie uma fun��o em C chamado jogaDado() que retorna, atrav�s de sorteio, um n�mero de 1 at� 6.

int jogaDado(){
	return (1 + rand()%6);
	}

int main(void){
	srand(time(NULL));
	printf("Sorteio: %d", jogaDado());
	system("Pause");
	return 0;
}
