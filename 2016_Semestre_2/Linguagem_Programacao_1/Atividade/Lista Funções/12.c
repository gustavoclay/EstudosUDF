#include <stdio.h>

//Um professor realizou 3 provas durante um semestre mas considerar� as duas notas mais altas para calcular a m�dia. 
//Fa�a uma aplica��o em C que receba do usu�rio o valor das 3 notas e exiba a m�dia final. 
//Desenvolva uma fun��o que ao receber estas tr�s notas retorne a m�dia entre as 2 notas mais altas.

int CalculaMedia(int n1, int n2, int n3){
   if (n1>n2 && n2>n3){
		return ((n1+n2)/2);   	
   }
   else if(n1>n2 && n3>n2){
		return ((n1+n3)/2);   	
   }
   else if(n2>n1 && n3>=n2){
		return ((n2+n3)/2);   	
   }

}

int main (void){
    int n1, n2, n3, media;

    printf("nota 1: ");
    scanf("%d", &n1);
    printf("nota 2: ");
    scanf("%d", &n2);
    printf("nota 3: ");
    scanf("%d", &n3);
	
	media = CalculaMedia(n1,n2,n3);
	
	printf("Media: %d ", media);
	
	system("Pause");
	return 0;
}
