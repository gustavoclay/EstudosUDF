#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Escreva	 um	 algoritmo	 para	 ler	 um	 valor	 (do	 teclado)	 e	 escrever	 (na	 tela)	 o	 seu	antecessor

int main(){
    int num;
    printf("Digite um valor: ");
    scanf("%d",&num);
    printf("%d\n",--num);
    
    system("Pause");   
}
