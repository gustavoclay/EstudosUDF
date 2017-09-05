#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//----------------------------------------------Struct------------------------------
struct Aluno{
    char Nome[60];
    float Notas[3];
    int Idade;
    };
//----------------------------------------------Preenche------------------------------
void preenche(int qtd, struct Aluno** a){
	int i,j;
	
	for(i=0; i<qtd; i++){
		a[i] = (Aluno*) malloc (sizeof(Aluno));
		printf("\n---Aluno %d---", i+1);
		printf("\nDigite o nome: ", i+1);
    	scanf("%s",&a[i]->Nome);
    	fflush(stdin);
		printf("\nDigite o Idade: ", i+1);
    	scanf("%d",&a[i]->Idade);        
    	printf("Digite as notas: ", i+1);
    	for(j=0; j<3; j++){
            printf("\n   Nota %d:",j+1);
            scanf("%f",&a[i]->Notas[j]);
        }//for
	}//for
}//função
//----------------------------------------------Calcula Media------------------------------
float calculaMedia(int pos, struct Aluno** a){
	int i;
	float Media = 0;
	for(i=0; i<3; i++){
        Media = Media + a[pos]->Notas[i];
        }//for
    return(Media/3);
}
//----------------------------------------------Exibe------------------------------
void exibe(int qtd, struct Aluno** a){
	int i,j;
	printf("\n\n---------LISTA---------\n");
	for(i=0; i<qtd; i++){
		printf("\n---Aluno %d---", i+1);
		printf("\nNome: %s", a[i]->Nome );
		printf("\nIdade: %d", a[i]->Idade );
    	for(j=0; j<3; j++){
            printf("\nNota %d: %.2f", j+1, a[i]->Notas[j]);
        }//for
        printf("\nMedia: %.2f", calculaMedia(i, a));
	}//for
}//função

//----------------------------------------------Exibe Aprovados------------------------------
void exibeAprovados(int qtd, struct Aluno** a){
	int i;
	printf("\n\n---------APROVADOS---------\n");
	for(i=0; i<qtd; i++){
		if(calculaMedia(i, a) >= 6){
			printf("\nNome: %s", a[i]->Nome );
		}//if
	}//for
}//função

//----------------------------------------------Exibe Media Idade Aprovados------------------------------
void exibeMediaIdadeAprovados(int qtd, struct Aluno** a){
	int i, Ap=0;
	float Soma=0;
	printf("\n\n---------MEDIA IDADE APROVADOS---------\n");
	for(i=0; i<qtd; i++){
		if(calculaMedia(i, a) >= 6){
			Soma += a[i]->Idade;
			Ap++;
		}//if
	}//for
	printf("Media: %.2f",(Soma/Ap));
}//função
//----------------------------------------------Main------------------------------       
int main(){
    int qtd;
    printf("Informa a quantidade de alunos: ");
    scanf("%d", &qtd);
    
    struct Aluno *turma[qtd];
    preenche(qtd, turma);
    exibe(qtd, turma);
    exibeAprovados(qtd, turma);
    exibeMediaIdadeAprovados(qtd, turma);
    getch();
    free(turma);
}
