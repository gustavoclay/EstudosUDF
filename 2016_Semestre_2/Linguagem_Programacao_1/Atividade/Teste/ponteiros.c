#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int num,valor;
	int *p;
	num=55;
	p=&num;/* Pega o endereco de num */
	valor=*p;/* Valor e igualado a num de uma maneira indireta */
	printf ("\n\n%d\n",valor);
	printf ("Endereco para onde o ponteiro aponta: %p\n",p);
	printf ("Valor da variavel apontada: %d\n",*p);
	system("PAUSE");
}
