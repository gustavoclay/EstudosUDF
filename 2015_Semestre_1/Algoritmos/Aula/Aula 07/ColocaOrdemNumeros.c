#include <stdio.h>
#include <conio.h>

int main(){
	//Variaveis: i,j para laços - a para auxiliar a troca de vetores - Num para armazenar os numeros - Quant para receber a quantidade de numeros
    int i,j,a,Num[1000],Quant;
    //Recebe a quantidade de numeros para ordenar
    printf("Digite a quantidade de numeros para ordenar: ");
    scanf("%d",&Quant);
    //laço para receber os numeros a serem ordenados
    for(i=0; i<Quant; i++){
    	printf("Digite um numero: ");
    	scanf("%d", &Num[i]);
	}
	//laço i para percorer o vetor inteiro, laço j para percorer o vetor a partir do 2ºitem, if para comparar os itens e ordenalos
	for(i=0; i<Quant; i++){
		for(j=i+1; j<Quant; j++){
			if (Num[i]>Num[j]){
				a=Num[i];
				Num[i]=Num[j];
				Num[j]=a;
			}	
		}
	}
	//laço for para imprimir o vetor ordenado após o processamento
	for(i=0; i<Quant; i++){
    	printf("%d \n", Num[i]);
	}
	
 getch();   
}
