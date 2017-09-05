#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
//-------------------------Calculadora------------------------------//
//---------------------------Funções--------------------------------//
//-----------------------------Soma---------------------------------//
float Soma(float Num1, float Num2){
    return (Num1 + Num2);
}
//-------------------------Subtração----------------------------//
float Subitracao(float Num1, float Num2){
    return (Num1 - Num2);
}
//-------------------------Multiplicação----------------------------//
float Multiplicacao(float Num1, float Num2){
    return (Num1 * Num2);
}
//-------------------------Divisão----------------------------//
float Divisao(float Num1, float Num2){
	if (Num2 != 0)
    	return (Num1 / Num2);
}
//-------------------------Exponencial----------------------------//
float Exponencial(float Base, int Expoente){
	//int i;
	//float Total=1;
	//for(i = 0; i <= Expoente - 1; i++ ){
	//	Total = Base * Total;
	//}
	//return (Total);
	if (Expoente == 0)
		return(1);
	else
		return Base * Exponencial(Base, Expoente -1);
}
//-------------------------Fatorial---------------------------//
float Fatorial(float Num1){
	if (Num1 == 0){
		return(1);
	}	
	else {
		return(Num1 * Fatorial(Num1-1));
	}
}


//-------------------------Menu - Inicio----------------------------//
int main (){
	
	setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
    
    float Num1 = 0, Num2 = 0, Total = 0;
    int option;
    
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
	
	if (option==7){
		system("cls");
		printf("Bye!");
		getch();
		exit(0);
	}
	
	if(option<1 || option>7){
		system("cls");
		printf("Opção Inválida! Pressione Enter para retornar ao menu.");
		getch();
		return main();	
	}
	
	printf("Informe o numero: ");
	scanf("%f", &Num1);
	if(option != 6){
		printf("Informe o segundo numero: ");
		scanf("%f", &Num2);
	}
	
	switch(option){
		case 1:
			printf("A soma de %.2f e %.2f é %.2f\n", Num1, Num2, Soma(Num1,Num2));
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
		case 2:
			printf("A subitração de %.2f e %.2f é %.2f\n", Num1, Num2, Subitracao(Num1,Num2));
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
		case 3:
			printf("A Multiplicação de %.2f por %.2f é %.2f\n", Num1, Num2, Multiplicacao(Num1,Num2));
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
		case 4:
			if (Num2 == 0){
				 printf("Não dividiras por 0");
			}
			else{
			printf("A Divisão de %.2f por %.2f é %.2f\n", Num1, Num2, Divisao(Num1,Num2));
			}
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
		case 5:
			printf("%.2f elevado a %.2f é %.2f\n", Num1, Num2, Exponencial(Num1, Num2));
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
		case 6:
			printf("O fatorial de %.2f é %.2f\n", Num1, Fatorial(Num1));
			printf("Pressione Enter para retornar ao menu.");
			getch();
			return main();
			
	}
	
    getch();
}
