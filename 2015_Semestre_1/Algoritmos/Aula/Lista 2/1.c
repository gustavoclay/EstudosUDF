#include <stdio.h>
#include <conio.h>

// Leia 10 n�meros do usu�rio e depois os imprima na ordem inversa em que foram lidos.

int main(){
	//variaveis
	int i,Num[10];
	//recebe 10 n�meros do usu�rio
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d",&Num[i]);
	}
	//Exibi os numeros na ordem inversa
	for(i=9;i>=0;i--){
		printf("%d\n", Num[i]);
	}
	getch();
}
