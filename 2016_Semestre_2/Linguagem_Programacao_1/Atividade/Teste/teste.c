#include <stdio.h>
#include <stdlib.h>


int main()
{
	int y, *p, x;
	y = 0; //variavel y recebe 0
	p = &y; //ponteiro p recebe endere�o de y 
	x = *p; //variavel x recebe apontamento de p, p aponta para 0 
	x = 4; //x recebe o valor 4
	(*p)++; // apontamento de p � incrementado, 1
	x--; // x � decrementado , 3
	(*p) += x; //conteudo apontado por p recebe ele mesmo mais x, 1+3
	printf ("y = %d\n", y); // y � 4
	return(0);
} 
