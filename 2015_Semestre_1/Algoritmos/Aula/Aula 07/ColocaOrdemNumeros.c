#include <stdio.h>
#include <conio.h>

int main(){
	//Variaveis: i,j para la�os - a para auxiliar a troca de vetores - Num para armazenar os numeros - Quant para receber a quantidade de numeros
    int i,j,a,Num[1000],Quant;
    //Recebe a quantidade de numeros para ordenar
    printf("Digite a quantidade de numeros para ordenar: ");
    scanf("%d",&Quant);
    //la�o para receber os numeros a serem ordenados
    for(i=0; i<Quant; i++){
    	printf("Digite um numero: ");
    	scanf("%d", &Num[i]);
	}
	//la�o i para percorer o vetor inteiro, la�o j para percorer o vetor a partir do 2�item, if para comparar os itens e ordenalos
	for(i=0; i<Quant; i++){
		for(j=i+1; j<Quant; j++){
			if (Num[i]>Num[j]){
				a=Num[i];
				Num[i]=Num[j];
				Num[j]=a;
			}	
		}
	}
	//la�o for para imprimir o vetor ordenado ap�s o processamento
	for(i=0; i<Quant; i++){
    	printf("%d \n", Num[i]);
	}
	
 getch();   
}
