#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
//------------------------- Banco ------------------------------//
/*Escrever um algoritmo que solicita Nome, n� conta e valor do saldo.
escrever as fun��es
1 - saque
2 - deposito
3 - consultar saldo*/
//---------------------------Fun��es--------------------------------//
float saldo;
//---------------------------Saque---------------------------------//
void saque(float quanto){
	if (quanto > saldo) {
		printf("Saldo insuficiente para realizar esta opera��o!\n");
	}
	else {
		saldo = saldo - quanto;
		printf("Opera��o realizada com sucesso!/n");
	}
}
//-------------------------Dep�sito----------------------------//
void deposito(float quanto){
	saldo = saldo + quanto;
	printf("Opera��o realizada com sucesso!\n");
}

//--------------------- -Conlsutar saldo---------------------------------//
void consulta(char n[60], char c[10], float s){
	printf("Cliente: %s \n", n);
	printf("Conta: %s \n", c);
	printf("Saldo: %.2f \n", s);
}

//-------------------------Menu - Inicio----------------------------//
int main (){
	char nome[60], conta[10];
	float saldo, valor;
	int option;
	
    setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
    
    printf("Informe o nome do correntista: ");
    scanf("%s", &nome);
    printf("Informe o numero da conta: ");
    scanf("%s", &conta);
    printf("Informe o valor do saldo: ");
    scanf("%f", &saldo);
    
   	do {
    	option=0;
		system("cls");
		printf("|--------------------------------------------|\n");
		printf("|                   Banco                    |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Op��o 1  - Saque                        |\n");
		printf("|    Op��o 2  - Dep�sito                     |\n");
		printf("|    Op��o 3  - Consultar saldo              |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Op��o 4 - Sair                          |\n");
		printf("|--------------------------------------------|\n\n");
		printf("Digite a op��o desejada: ");
		scanf("%d",&option);
		
		switch (option){
			
			case 1 :
                system("cls");
  		        printf("|         Op��o 1  - Saque          |\n");
				printf("Informe o valor que deseja sacar: ");
				scanf("%f", &valor);
				saque(valor);
				printf("Pressione a tecla enter para voltar ao menu...");
				getch();
				break;
			
			case 2 :
                system("cls");
  		        printf("|    Op��o 2  - Dep�sito           |\n");
				printf("Informe o valor que deseja depositar: ");
				scanf("%f", &valor);
				deposito(valor);
				printf("Pressione a tecla enter para voltar ao menu...");
				getch();
				break;
				
			case 3 :
                system("cls");
				printf("|    Op��o 3  - Consultar saldo         |\n");
				consulta(nome, conta, saldo);
				printf("Pressione a tecla enter para voltar ao menu...");
				getch();
				break;
				
			case 4 :
				system("cls");
			   	printf("Bye!");
			   	getch();
				exit(0);
				break;
			   
			default:
			   	system("cls");
				printf("Op��o Inv�lida! Pressione a tecla para continuar...");
				getch();
				}
				
		}while (option != 4);
    
    
    return (0);
}
