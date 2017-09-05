#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Escreve	um	programa	que	sorteie,	aleatoriamente,	10	números	e armazene	estes	em	um	vetor.
Em	seguida, o usuário	digita um número e seu	programa em	C deve acusar se o número digitado está	no vetor ou	não.
Se	estiver,	diga	a	posição	que	está.*/
int main(){
	int i, Num[20], NumUser, Pos;
	
	srand(time(NULL));
	
	for(i=1; i<=10; i++){
		Num[i]=rand();
		printf("Numero %d: %d\n", i, Num[i]);
	}
	
	printf("Digite o numero desejado: ");
	scanf("%d",&NumUser);
	Pos=0;
	
	for(i=1; i<=10; i++){
		if(Num[i]==NumUser){
			Pos=i;
		}
	}
	
	printf("%d\n", Pos);
			
	if(Pos != 0){
		printf("\nO numero %d esta no vetor, na posicao %d", NumUser, Pos);
	}
	else{
		printf("\nO numero %d nao pertence ao vetor", NumUser);
	}
	
	getch();
}
