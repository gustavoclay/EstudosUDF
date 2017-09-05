#include <stdio.h>

int main()
{
    char letra1, letra2;

    printf("Insira um caractere: ");
    letra1 = getchar();

    fflush(stdin);

    printf("Insira outro caractere: ");
    letra2 = gets();

    printf("Você digitou: '%c' e '%c'", letra1, letra2);
}
