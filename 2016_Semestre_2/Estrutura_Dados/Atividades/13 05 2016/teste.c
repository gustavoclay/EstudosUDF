#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------PREENCHE------------------------------------------------
void preencheNumeros(int Qtd, float Num[]){
	int i;
	for (i=0; i<Qtd; i++){
        printf("\n Informe o %d.numero: ", i+1);
        scanf("%f", &Num[i]);
    }
}
//------------------------------------------------EXIBE---------------------------------------------------
void exibeNumeros(int Qtd, float Num[]){
	int i;
	for (i=0; i<Qtd; i++){
        printf("\n\n %d.Numero: %.2f ", i+1, Num[i]);
    }
	
}
//------------------------------------------------SOMA------------------------------------------------
void somaNumeros(int Qtd, float Num[]){
	float Soma = 0;
	int i;
	for (i=0; i<Qtd; i++){
        Soma = Soma + Num[i];
    }
	printf("\n\n Somatorio: %.2f ", Soma);
}
//------------------------------------------------MEDIA------------------------------------------------
void mediaNumeros(int Qtd, float Num[]){
	float Media = 0;
	int i;
	for (i=0; i<Qtd; i++){
        Media = Media + Num[i];
    }
    printf("\n\n Media: %.2f ", Media/Qtd);
}
//------------------------------------------------RETORNA MAIOR------------------------------------------------
void retornaMaior(int Qtd, float Num[]){
	int i,j; 
	float Maior = 0;
	for (i=0; i<Qtd; i++){
        if(Num[i] > Maior)
        	Maior = Num[i];
    }
    printf("\n\n Maior: %.2f ", Maior);
}
//------------------------------------------------RETORNA MENOR------------------------------------------------
void retornaMenor(int Qtd, float Num[]){
	int i,j; 
	float Menor = Num[1];
	for (i=0; i<Qtd; i++){
        if(Num[i] < Menor)
        	Menor = Num[i];
    }
    printf("\n\n Menor: %.2f ", Menor);
}
//------------------------------------------------ORDENA CRESCENTE------------------------------------------------
void ordenaCrescente(int Qtd, float Num[]){
	int i,j; 
	float temp;
	for (i=0; i<Qtd; i++){
        for ( j=i+1; j<Qtd; j++){
            if(Num[j] < Num[i]){
                temp = Num[j];
                Num[j] = Num[i];
                Num[i] = temp;         
            }
        }
    }
    printf("\n\n Ordem Cresente: \n");
    for (i=0; i<Qtd; i++){
        printf(" %.2f ", Num[i]);
    }	
}
//------------------------------------------------ORDENA DECRESCENTE------------------------------------------------
void ordenaDecrescente(int Qtd, float Num[]){
	int i,j; 
	float temp;
	for (i=0; i<Qtd; i++){
        for ( j=i+1; j<Qtd; j++){
            if(Num[j] > Num[i]){
                temp = Num[j];
                Num[j] = Num[i];
                Num[i] = temp;         
            }
        }
    }
    printf("\n\n Ordem Decresente: \n");
    for (i=0; i<Qtd; i++){
        printf(" %.2f ", Num[i]);
    }	
}

//------------------------------------------------MAIN------------------------------------------------
int main()
{
    int Qtd;
    printf("Quantos numeros deseja: ");
    scanf("%d",&Qtd);
    
    float fltNumero[Qtd];
    preencheNumeros(Qtd, &fltNumero[Qtd]);
    exibeNumeros(Qtd, &fltNumero[Qtd]);
	somaNumeros(Qtd, &fltNumero[Qtd]);
	mediaNumeros(Qtd, &fltNumero[Qtd]);
    retornaMaior(Qtd, &fltNumero[Qtd]);
	retornaMenor(Qtd, &fltNumero[Qtd]);
    ordenaCrescente(Qtd, &fltNumero[Qtd]);
    ordenaDecrescente(Qtd, &fltNumero[Qtd]);
	
    printf("\n");
    system("Pause");
}
