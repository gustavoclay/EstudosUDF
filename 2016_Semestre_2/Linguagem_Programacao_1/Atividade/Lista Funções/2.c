#include <stdio.h>

//Crie uma fun��o em C que receba tr�s valores, 'a', 'b' e 'c',
//que s�o os coeficientes de uma equa��o do segundo grau e retorne o valor do delta, que � dado por 'b� - 4ac'

int CalcDelta(float a, float b, float c){
	float delta;
	delta = (b*b) - 4*a*c;
	return delta;
}

int main(void){
	float a,b,c, delta;
	
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);
	
	delta = CalcDelta(a,b,c);
	
	printf("\nDelta: %.2f\n", delta);
	
	system("Pause");
	return 0;	
}
