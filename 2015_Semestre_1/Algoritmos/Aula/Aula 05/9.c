#include <stdio.h>
#include <conio.h>

//Alteração: algoritmo que leia 10 numeros e imprima qual é o maior.

int main(){
	system ("color 9F");
	
	//variaveis
	int vlrNum,vlrMaior=0,vlrCont;
	
	//loop para recebimento de valores
	for(vlrCont=1;vlrCont<10;vlrCont++){
		printf("Digite um numero: ");
		scanf("%d",&vlrNum);
		
		//Realiza a comparação do numero maior	
		if(vlrNum>vlrMaior)vlrMaior=vlrNum;
	}
	//Exibi o maior número dentre os recebidos 
	printf("Maior Valor: %d",vlrMaior);
	
	getch();
}
