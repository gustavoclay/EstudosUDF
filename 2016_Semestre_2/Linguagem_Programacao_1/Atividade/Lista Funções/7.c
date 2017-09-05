#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie uma função em C chamado jogaDado() que retorna, através de sorteio, um número de 1 até 6.

int jogaDado(){
	return (1 + rand()%6);
	}

int main(void){
	srand(time(NULL));
	printf("Sorteio: %d", jogaDado());
	system("Pause");
	return 0;
}
