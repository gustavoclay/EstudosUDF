#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
//-------------------------Calculadora------------------------------//
//---------------------------Funções--------------------------------//
//-----------------------------Soma---------------------------------//
int Soma(float Num1, float Num2){
    return (Num1 + Num2);
}
//-------------------------Subtração----------------------------//



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
		printf("|    Opção 1  - Soma                         |\n");
		printf("|    Opção 2  - Subtração                    |\n");
		printf("|    Opção 3  - Multiplicação                |\n");
		printf("|    Opção 4  - Divisão                      |\n");
		printf("|    Opção 5  - Exponencial                  |\n");
		printf("|    Opção 6  - Fatorial                     |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Opção 7 - Sair                          |\n");
		printf("|--------------------------------------------|\n\n");
		printf("Digite a opção desejada: ");
		scanf("%d",&option);
		
		switch (option){
			
				case 1 :
                     system("cls");
  		             printf("|    Opção 1  - Soma                         |\n\n");
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
					printf("Opção Inválida! Pressione Enter para continuar...");
					getch();
					
					} 
		}while (option != 7);	
		
    return (0);
}
