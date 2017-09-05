#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "Portuguese");
	system ("color 9F");
    
    int num, i;
    char aux[100];
    printf("Digite um valor: ");
    scanf("%d",&num);
    
    for ( i=1; i<=8; i++){
        aux[i]=num%2;
        num=num/2;
        }
        
    for ( i=8; i>0; i--){
        printf("%d", aux[i]);
        }
        
    printf("\n");
    system("Pause");
}
