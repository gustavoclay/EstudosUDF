#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e 90, ou n�o.

int main(){
	setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
	
	//variaveis
	float vlrNum;
	
	//recebe o valor do usu�rio
	printf ("Digite um n�mero:");
	scanf ("%f",&vlrNum);
	
	//verifica se o n�mero est� compreendido entre 20 e 90
	if (vlrNum<=90 && vlrNum>=20){
		printf("O n�mero %.1f est� compreendido entre 20 e 90.", vlrNum);
	}
	else {
		printf("O n�mero %.1f n�o est� compreendido entre 20 e 90.", vlrNum);
	}
	
	getch();
}
