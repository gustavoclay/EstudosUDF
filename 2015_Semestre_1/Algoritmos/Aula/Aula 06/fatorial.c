#include <stdio.h>
#include <conio.h>

// Calcular o fatorial de um numero inteiro

int main(){
	
	//variaveis
	int n, f;
	
	//recebe o valor para calcular o fatorial
	printf("Digite um que deseja calcular o fatorial: ");
	scanf("%d",&n);
	
	//processamento
	for(f=1; n>1; n=n-1){
		f=f*n;
	}
	
	//resultado
	printf("Fatorial Calculado: %d",f);
	
	getch();
}
