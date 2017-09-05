#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, Qtd, temp;
    printf("Quantos numeros: ");
    scanf("%d",&Qtd);

    printf("\n %d. entao: ", Qtd);
    float fltNumero[Qtd+2];
    int intNumero[Qtd];
    fltNumero[Qtd+1] = 0;
    for (i=0; i<Qtd; i++){
        printf("\n Informe o %d. numero: ", i+1);
        scanf("%f", &fltNumero[i]);
        intNumero[i] = fltNumero[i];
        fltNumero[Qtd+1] = fltNumero[Qtd+1] + fltNumero[i];
    }

    printf("\n\n");
    i=0;

    do
        printf("\n %.2f", fltNumero[i++]);
    while (i < Qtd);
    fltNumero[Qtd+2] = fltNumero[Qtd+1] / Qtd;
    printf("\n\n A soma e: %.2f", fltNumero[Qtd+1]);
    printf("\n\n A Media e: %.2f", fltNumero[Qtd+2]);
    // imprimir numeros lado a lado do menor para o maior
    
    for (i=0; i<Qtd; i++){
        for ( j=i+1; j<Qtd; j++){
            if(intNumero[j] < intNumero[i]){
                            temp = intNumero[j];
                            intNumero[j] = intNumero[i];
                            intNumero[i] = temp;
                              
            }
        }
    }
    printf("\n\n");
    for (i=0; i<Qtd; i++){
        printf("%d ", intNumero[i]);
    }
    
    printf("\n");
    system("Pause");
}
