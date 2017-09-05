#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

main(){
	
//O sistema de avaliação de determinada disciplina é composto por três provas. A primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. 
//Considerando que a média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno desta disciplina e dizer se o aluno foi aprovado ou não

	float ProvaA, ProvaB, ProvaC, Media;
	char Nome[20];
	
	printf ("-------------------AVALIACAO DA DISCIPLINA-------------------\n\n");
	printf ("Digite o nome do aluno: ");
	gets (Nome);
	printf ("\n");
	printf ("Digite a nota do aluno em cada prova.\n\n");
	printf ("Prova A: ");
	scanf ("%f", &ProvaA);
	printf ("Prova B: ");
	scanf ("%f", &ProvaB);
	printf ("Prova C: ");
	scanf ("%f", &ProvaC);
	printf ("\n");
	
	Media = (ProvaA*2 + ProvaB*3 + ProvaC*5)/(2+3+5);
	
	printf ("Media: %.2f\n\n", Media);
	
	if(Media < 6){
		printf ("%s foi reprovado na disciplina", Nome);
	}
	else {
		printf ("%s foi Aprovado na disciplina", Nome);
	}
	
	printf ("\n\n");
	system ("pause");
}
