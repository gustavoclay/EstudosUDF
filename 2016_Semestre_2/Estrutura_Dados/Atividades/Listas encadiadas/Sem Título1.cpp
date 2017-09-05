#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Endereco {
  char logradouro[200];
  char bairro[50];
  char cidade[50];
  char UF[2];
  char CEP[8];
  int numero;
};
  
struct Aluno{
  char nome[60];
  int idade;
  float notas[5];
  struct Endereco residencial;
  struct Endereco comercial;
};

int qtd =0;

int cadastrar(struct Aluno** a){
char s;
  for(int j=0; j<=100000; j++){
    qtd++;
    a[j] = (Aluno*)malloc(sizeof(Aluno));
    printf("Digite o nome do %d. aluno: ", qtd);
    scanf("%s",&a[j]->nome);
    fflush(stdin);        
    printf("Digite a idade do %d. aluno: ", qtd);
    scanf("%d",&a[j]->idade);
    printf("Digite as notas do %d. aluno: ", qtd);
    for(int i=0; i<3; i++){
            printf("\n   Nota %d:",i+1);
            scanf("%f",&a[j]->notas[i]);
            }
    printf("\n Deseja digitar outro aluno (s/n): ");
    scanf("%s", &s);
    if (s == 'n') 
      break;
   } // for          
   return(qtd);
} // registro















































































































































































































































float calculaMedia(struct Aluno** turma) {
   float totalIdade = 0;
   float media, qtdAprovados = 0;
   
   for (int i=0; i<qtd; i++){ // percorrendo a turma...
     media = 0;
     for(int k=0; k<=2; k++) // percorrendo as notas...
        media = media + turma[i]->notas[k];
     media = media/3;   
      
     if (media >= 7) {
       totalIdade = totalIdade + turma[i]->idade;
       qtdAprovados = qtdAprovados + 1;
     }     
   }
  return (totalIdade/qtdAprovados);
}

void imprimir(struct Aluno** a){
     for (int i=0; i<qtd; i++){
         printf("Nome do aluno %d: %s\n", i+1, a[i]->nome);
         printf("Idade do aluno %d: %d\n", i+1, a[i]->idade);
         for(int j=0; j<=2; j++){
                 printf("Nota %d: %.2f\n", j+1, a[i]->notas[j]);
           }
     }
}

int main(){
    struct Aluno *turma[30];
    if (cadastrar(turma) > 0) 
      imprimir(turma);
      
    printf("\n A media de idade dos aprovados eh: %.2f", calculaMedia(turma));   

    getch();
}
     
     
     
     
     
     
     
