#include <stdio.h>

int main()
{
	//variaveis
	register int i;
	int soma=0;
	//inicio
	for(i=1;i<=100;i++)
	{
		soma = soma + i;
		printf("\nNumero: %d",i);
		printf("\nSoma atual: %d\n",soma);
	}
	return 0;
}
