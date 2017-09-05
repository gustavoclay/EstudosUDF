#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Utilizando a função desenvolvida na questão 7, elabore um programa em C que jogue um dado 100 vezes e conte quantas vezes cada numero (1 a 6) foi sorteado..

int jogaDado(){
	return (1 + rand()%6);
	}

int main(void){
	srand(time(NULL));
	int i, num, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
	
	for (i=0; i<=100; i++){
		num = jogaDado();
		if(num == 1){
			cont1 = cont1 + 1;
		}
		else if(num == 2){
			cont2 = cont2 + 1;
		}
		else if(num == 3){
			cont3 = cont3 + 1;
		}
		else if(num == 4){
			cont4 = cont4 + 1;
		}
		else if(num == 5){
			cont5 = cont5 + 1;
		}
		else if(num == 6){
			cont6 = cont6 + 1;
		}
	}
	
	printf("Numero 1 foi sorteado %d vezes\n", cont1);
	printf("Numero 2 foi sorteado %d vezes\n", cont2);
	printf("Numero 3 foi sorteado %d vezes\n", cont3);
	printf("Numero 4 foi sorteado %d vezes\n", cont4);
	printf("Numero 5 foi sorteado %d vezes\n", cont5);
	printf("Numero 6 foi sorteado %d vezes\n", cont6);
		
	system("Pause");
	return 0;
}

