#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, Qtd;
    printf("Quantos numeros: ");
    scanf("%d",&Qtd);

    printf("\n %d? entao: ", Qtd);
    float fltNumero[Qtd+1];
    fltNumero[Qtd+1] = 0;
    for (i=0; i<Qtd; i++){
        printf("\n Informe o %d. numero: ", i+1);
        scanf("%f", fltNumero[i]);
        fltNumero[Qtd+1] = fltNumero[Qtd+1] + fltNumero[i];
    }

    printf("\n\n");
    i=0;

    do
        printf("\n %.2f", fltNumero[i++]);
    while (i < Qtd);
    printf("\n\n A soma e: %.2f", fltNumero[Qtd+1]);
    system("Pause");
}
