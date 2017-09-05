#include <stdio.h>

//Crie uma função que receba um numero inteiro e imprima se ele é primo ou não.

int primo(int n){
   int i;
   if( n == 1 ) return 0;
   for(i=2; i*i <= n;i++){
       if (n % i == 0) return 0;
   }
   return 1;
}

int main (void){
    int i = 17;

    printf("o numero %i %s\n",i,((primo(i)? "eh primo": "nao eh primo")));
    return 0;

}
