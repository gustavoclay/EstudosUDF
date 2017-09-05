#include <stdio.h>
#include <conio.h>
#define MAIORIDADE 18
//Crie um aplicativo em C que peça ao usuário sua idade, e diga se ele já pode dirigir (se tiver 16 anos ou mais),
//se alistar (se tiver 18 anos ou mais) e se já pode se aposentar(65 anos ou mais).
//Use constantes: const e #define.
const int aposentadoria=65;
const int motorista=16;

int main(){
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= motorista){
    printf("Você já pode dirigir\n");              
    }
    
    if(idade >= MAIORIDADE){
    printf("Você já pode se alistar\n");              
    }
    
    if(idade >= aposentadoria){
    printf("Você já pode se aposentar\n");              
    }

    getch();
}
