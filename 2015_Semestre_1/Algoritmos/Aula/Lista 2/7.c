#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Crie	um	programa	em	C	que	crie	um	vetor	que	tenha	os	10	primeiros números	da	série	de	Fibonacci.*/
int main(){
	int i, Fib[20], soma, n;
	Fib[1]=1;
	Fib[2]=1;
	
	for(i=3; i<=10; i++){
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	
	printf("Sequencia Fibonacci\n");
	for(i=1; i<=10; i++){
		printf("%d\n", Fib[i]);
	}
	getch();
}
