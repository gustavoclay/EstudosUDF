#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* Reescreva	as	instruções	abaixo	com	o	mínimo	de	parênteses	possível, mas	sem	alterar	o resultado:
A = 6*(3+2)            F= (6/3)+(8/2)
B = 2+(6*(3+2))        G= ((3+(8/2))*4)+(3*2)
C = 2+(3*6)/(2+4)      H= (6*(3*3)+6)-10
D = 2*(8/(3+1))        I= (((10*8)+3)*9)
E = 3+(16-2)/(2*(9-2)) J= ((-12)*(-4))+(3*(-4))
*/
int main(){
    int A,B,C,D,E,F,G,H,I,J;
    A=(3+2)*6;
    printf("A= %d\n",A);
    B=2+6*(3+2);
    printf("B= %d\n",B);
    C = 2+3*6/(2+4);
    printf("C= %d\n",C);
    D = 2*8/(3+1);
    printf("D= %d\n",D);
    E = 3+(16-2)/(2*(9-2));
    printf("E= %d\n",E);
    F= 6/3+8/2;
    printf("F= %d\n",F);
    G= (3+8/2)*4+3*2;
    printf("G= %d\n",G);
    H= 6*3*3+6-10;
    printf("H= %d\n",H);
    I= (10*8+3)*9;
    printf("I= %d\n",I);
    J= ((-12)*(-4))+3*(-4);
    printf("J= %d\n",J);
    
    system("Pause");   
}
