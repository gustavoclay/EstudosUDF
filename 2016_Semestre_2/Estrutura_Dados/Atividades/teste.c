#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
//-------------------------Calculadora------------------------------//
//---------------------------Fun��es--------------------------------//
//-----------------------------Soma---------------------------------//
int Soma(float Num1, float Num2){
    return (Num1 + Num2);
}
//-------------------------Subtra��o----------------------------//



//-------------------------Menu - Inicio----------------------------//
int main (){
    setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
    
    float Num1 = 0, Num2 = 0;
    int option;
    
    do {
    	option=0;
		system("cls");
		printf("|--------------------------------------------|\n");
		printf("|                  Calculadora               |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Op��o 1  - Soma                         |\n");
		printf("|    Op��o 2  - Subtra��o                    |\n");
		printf("|    Op��o 3  - Multiplica��o                |\n");
		printf("|    Op��o 4  - Divis�o                      |\n");
		printf("|    Op��o 5  - Exponencial                  |\n");
		printf("|    Op��o 6  - Fatorial                     |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Op��o 7 - Sair                          |\n");
		printf("|--------------------------------------------|\n\n");
		printf("Digite a op��o desejada: ");
		scanf("%d",&option);
		
		switch (option){
			
				case 1 :
                     system("cls");
  		             printf("|    Op��o 1  - Soma                         |\n\n");
					 printf("Digite o primeiro numero: ");
					 break;
					
					
			   case 7 :
			   		system("cls");
			   		printf("Bye!");
			   		getch();
					exit(0);
					break;
			   
			   default:
			   		system("cls");
					printf("Op��o Inv�lida! Pressione Enter para continuar...");
					getch();
					
					} 
		}while (option != 7);	
		
    return (0);
}
