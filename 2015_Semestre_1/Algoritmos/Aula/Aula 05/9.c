#include <stdio.h>
#include <conio.h>

//Altera��o: algoritmo que leia 10 numeros e imprima qual � o maior.

int main(){
	system ("color 9F");
	
	//variaveis
	int vlrNum,vlrMaior=0,vlrCont;
	
	//loop para recebimento de valores
	for(vlrCont=1;vlrCont<10;vlrCont++){
		printf("Digite um numero: ");
		scanf("%d",&vlrNum);
		
		//Realiza a compara��o do numero maior	
		if(vlrNum>vlrMaior)vlrMaior=vlrNum;
	}
	//Exibi o maior n�mero dentre os recebidos 
	printf("Maior Valor: %d",vlrMaior);
	
	getch();
}
