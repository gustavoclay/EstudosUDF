#include <stdio.h>
#include <conio.h>

int main(){
	int num,maior=0,y=0;

	for(y=1;y<10;y++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if(num>maior) maior=num;
	}
	
	printf("o maior numero digitado foi %d",maior);

	getch();
}
