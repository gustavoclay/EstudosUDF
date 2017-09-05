#include <stdio.h>
#include <conio.h>
#include <math.h>

// Calcular o fatorial de um numero inteiro

int main(){
	
	//variaveis
	float n, r=1;
	int e, i;
	
	//recebe o valor para calcular a Exponenciação
	printf("Digite a base: ");
	scanf("%f",&n);
	printf("Digite o expoente: ");
	scanf("%d",&e);
	
	//processamento
	for(i=0; i<=e-1; i++){
		r=n*r;
	}
	
	//resultado
	printf("Resultado: %.1f\n",r);
	getch();
	
	//usando a bliblioteca math função pow
	r=pow(n, e);
	printf("Resultado: %.1f",r);
	
	getch();
}
