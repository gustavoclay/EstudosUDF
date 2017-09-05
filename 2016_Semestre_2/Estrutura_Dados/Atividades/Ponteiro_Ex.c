#include<stdio.h>
#include<conio.h>

struct ponto {
  float x;
  float y;
};

void capturaUsandoPonteiro (struct ponto *a) { 
  printf("Digite a coordenada do ponto x: ");
  scanf("%f", &a->x);
  printf("Digite a coordenada do ponto y: ");
  scanf("%f", &a->y);
}

void imprimeUsandoPonteiro (struct ponto *pp) { 
  printf("\n O ponto fornecido foi: (%.2f, %.2f) ", pp->x, pp->y); 
}

void capturaSemUsarPonteiro (struct ponto b) { 
  printf("Digite a coordenada do ponto x: ");
  scanf("%f", &b.x);
  printf("Digite a coordenada do ponto y: ");
  scanf("%f", &b.y);
}

void imprimeSemUsarPonteiro (struct ponto pp) { 
  printf("\n O ponto fornecido foi: (%.2f, %.2f) ", pp.x, pp.y); 
}

int main () { 
  struct ponto p; 
  capturaUsandoPonteiro(p); 
  imprimeUsandoPonteiro(p); 
  printf("\n\n");
  capturaSemUsarPonteiro(p);
  imprimeSemUsarPonteiro(p);
  getch();
}

