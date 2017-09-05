#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Construa um programa que calcule a quantidade de latas de tinta
necessárias e o custo para pintar a área externa de tanques
cilíndricos de combustível, quando são fornecidos a altura e o raio
desse cilindro.
* a lata de tinta custa R$10,00
* cada lata contém 8 litros
* cada litro de tinta pinta 5 metros quadrados. 
Área do cilindro = 2 x área da base + perímetro da base x altura
* Área da Base = r².pi	
* Perímetro da Base = 2.r.pi */

int main (){
    float alt, raio, arBase, arCil, prBase, pi=3.14, latas, custo;
    //entrada de dados
    printf("Digite a altura: ");
    scanf("%f",&alt);
    printf("Digite o raio: ");
    scanf("%f",&raio);
    printf("\n");
    //perimetro da base
    prBase=(2*raio*pi);
    printf("perimetro da base: %.1f\n",prBase);
    //Area da base
    arBase=(raio*raio)*pi;  
    printf("Area da base: %.1f\n",arBase);
    //Area da cilindro
    arCil=(2*arBase)+(prBase*alt);
    printf("Area da cilindro: %.1f\n",arCil);
    printf("\n");
    //Quantidade de latas necessárias
    latas=(arCil/5)/8;
    latas=ceil(latas);
    printf("A quantidade de latas de tinta necessarias: %.1f\n",latas);
    //Custo total
    custo=latas*10.0;
    printf("Custo da lata: 10.0 R$\n",custo);
    printf("Custo total: %.1f R$\n",custo);
    
    system("Pause");
}
