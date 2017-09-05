#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
//-------------------------Conversor de Bases------------------------------//
//------------------------------Funções-----------------------------------//
//-------------------------Decimal para Binário----------------------------//
int DecToBin(){
	
	int num=0, i=0;
    char aux[100];
    
	system("cls");
	printf("Opção 1 - Decimal     > Binário\n");
	printf("Digite o valor em decimal: ");
	scanf("%d",&num);
	
	for ( i=1; i<=8; i++){
		aux[i]=num%2;
		num=num/2;
		} 
		
	printf("Valor em Binário: ");
	
	for ( i=8; i>0; i--){
		printf("%d", aux[i]);
		}
		
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();
}
//-------------------------Decimal para Octal----------------------------//
int DecToOct(){
	
	int num=0, i=0, cont=0;
    char aux[100];
    
	system("cls");
	printf("Opção 2 - Decimal     > Octal\n");
	printf("Digite o valor em decimal: ");
	scanf("%d",&num);
	while(num>=8){
		aux[i]=num%8;
		num=num/8;
		i++;
		} 
	aux[i]=num%8;
	cont=i;
	printf("Valor em Octal: ");
	while(cont>=0){
		printf("%d",aux[cont]);                
	cont--;
	}
	
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();
}
//-------------------------Decimal para Hexadecimal----------------------------//
int DecToHex(){
	
	int num=0, i=0, cont=0;
    char aux[100];
    
	system("cls");
	printf("|    Opção 3  - Decimal     > Hexadecimal    |\n");
	printf("Digite o valor em decimal: ");
	scanf("%d",&num);
	
	while(num>=15){
		aux[i]=num%16;
		num=num/16;
		i++;
		} 
	aux[i]=num%16;
	cont=i;
	
	printf("Valor em Hexadecimal: ");
	
	while(cont>=0){
		if(aux[cont] == 10) 
			printf("A");                
		else if(aux[cont] == 11) 
			printf("B");                
		else if(aux[cont] == 12) 
			printf("C");                
		else if(aux[cont] == 13) 
			printf("D");                
		else if(aux[cont] == 14) 
			printf("E");                
		else if(aux[cont] == 15) 
			printf("F");                        
		else 
			printf("%d",aux[cont]);                
		cont--;                                       
	}
	
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();

}
//-------------------------Binário para Decimal----------------------------//
int BinToDec(){
	
	int total=0, potencia=1, bin=0, dec=0;
	
	system("cls");
	printf("Digite o numero em Binário: ");
	scanf("%d", &bin);
	
	do{
		dec = dec + (bin % 10) * potencia;
		potencia = potencia * 2;
		bin = bin/10;
	} while(bin != 0);
	
	printf("Valor em Decimal: %d\n", dec);
	
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();
}
//-------------------------Octal para Decimal----------------------------//
int OctToDec(){
	
	int total=0, potencia=0, oct=0, dec=0;
	
	system("cls");
	printf("Digite o numero em Octal: ");
	scanf("%d", &oct);
	
	do{
		dec = dec + (oct % 10) * pow(8,potencia++);
		oct = oct/10;
	} while(oct != 0);
	
	printf("Valor em Decimal: %d\n", dec);
	
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();
}
//-------------------------Octal para Binario----------------------------//
int OctToBin(){
	
	char oct[1000];
	long int i=0;
	
	system("cls");
	printf("Digite o numero em Octal: ");
	scanf("%s", &oct);
	printf("Valor em Binário: \n");
	while (oct[i]){
		switch (oct[i]){
			case '0': printf("000"); break;
			case '1': printf("001"); break;
			case '2': printf("010"); break;
			case '3': printf("011"); break;
			case '4': printf("100"); break;
			case '5': printf("101"); break;
			case '6': printf("110"); break;
			case '7': printf("111"); break;
   			default:  prault:  printf("- Digito inválido %c -",oct[i]);
		}
		i++;
	}
	
	printf("\n\nPressione Enter para retornar ao Menu.");
	getch();
}


//-------------------------Menu - Inicio----------------------------//
int main (){
    setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
    
    int option;
    
    do {
    	option=0;
		system("cls");
		printf("|--------------------------------------------|\n");
		printf("|           CONVERSOR DE BASES               |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Opção 1  - Decimal     > Binário        |\n");
		printf("|    Opção 2  - Decimal     > Octal          |\n");
		printf("|    Opção 3  - Decimal     > Hexadecimal    |\n");
		printf("|    Opção 4  - Binário     > Decimal        |\n");
		printf("|    Opção 5  - Octal       > Decimal        |\n");
		printf("|    Opção 6  - Octal       > Binário        |\n");
		printf("|--------------------------------------------|\n");
		printf("|    Opção 11 - Sair                         |\n");
		printf("|--------------------------------------------|\n\n");
		printf("Digite a opção desejada: ");
		scanf("%d",&option);
		
		switch (option){
			
				case 1 :
					DecToBin();
					break;
					
				case 2 :
					DecToOct();
					break;
					
				case 3 :
					DecToHex();
					break;
					
				case 4 :
					BinToDec();
					break;
					
				case 5 :
					OctToDec();
					break;
					
				case 6 :
					OctToBin();
					break;
					
			   case 11 :
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
		}while (option != 11);	
		
    return (0);
}
