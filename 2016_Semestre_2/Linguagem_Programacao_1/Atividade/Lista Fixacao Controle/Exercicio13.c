#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Escreva	um	algoritmo que	imprima	a	tabuada	(de	1	a	10)	para	os	números	de	1	a	10.*/

int main(void){
 
     int i, j;
     for (i = 1; i <= 10; i = i + 1)
     {
         for (j = 1; j <= 10; j = j + 1)
             printf("%2d x %2d = %3d\n", j, i, i * j);
         printf("\n");
     }
     return 0;
 
}
