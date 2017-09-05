#include <stdio.h>
#include <conio.h>

main()

{
	float Num1, Dobro, Triplo, Quadrado, DivDois;
	
	printf ("Digite um numero: ");
	scanf ("%f",&Num1);
	
	Dobro = Num1 * 2;
	Triplo = Num1 * 3;
	Quadrado = Num1 * Num1;
	DivDois = Num1 / 2;
	
	printf ("O dobro de %.1f eh %.1f\n", Num1,Dobro);
	printf ("O tripo de %.1f eh %.1f\n", Num1,Triplo);
	printf ("O quadrado de %.1f eh %.1f\n", Num1,Quadrado);
	printf ("%.1f dividido por 2 eh %.1f\n", Num1,DivDois);
	
	system("pause");
}
