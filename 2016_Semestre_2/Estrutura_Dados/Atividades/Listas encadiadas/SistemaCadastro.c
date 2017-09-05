#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Endereco {
  char logradouro[200];
  char bairro[50];
  char cidade[50];
  char UF[2];
  char CEP[8];
  int numero;
};
  
struct Pessoa {
  int codigo;
  char nome[60];
  char sexo;
  float salario;
  char cpf[11];
  struct Endereco residencial;
  struct Endereco comercial;
};

void inicializaLista(int qtd, struct Pessoa** cliente) {
  for(int i=1; i<=qtd; i++) {
    cliente[i] = (Pessoa*)malloc(sizeof(Pessoa));
    cliente[i]->codigo = 0;
    for (int j=0; j<60; j++)
      cliente[i]->nome[j] = ' ';
    cliente[i]->sexo = ' ';
    cliente[i]->salario = 0.00;
    for (int j=0; j<11; j++)
      cliente[i]->cpf[j] = ' ';
  }
}
          
int retornaUltimo(struct Pessoa** c){
int posicao = 0;    
  do 
    posicao++;
  while (c[posicao]->codigo != 0);
  return(posicao);
}

void inserirFinal(struct Pessoa** cli){
  int posicao = retornaUltimo(cli);  
  cli[posicao]->codigo = posicao;
  printf("\n");
  printf("\n Digite o nome do %d. cliente: ", posicao);
  scanf("%s",&cli[posicao]->nome);
  fflush(stdin);        
  printf("Digite o sexo de %s: ", cli[posicao]->nome);
  scanf("%c",&cli[posicao]->sexo);
  printf("Digite o salario de %s: ", cli[posicao]->nome);
  scanf("%f",&cli[posicao]->salario);
  printf("Digite o CPF de %s: ", cli[posicao]->nome);
  scanf("%s",&cli[posicao]->cpf);
} 

bool imprimir(int quem, struct Pessoa** c){ 
  printf("\n");
  printf("\n Codigo: %d",     c[quem]->codigo);
  printf("\n Cliente: %s",    c[quem]->nome);
  printf("\n CPF de %s: ",    c[quem]->cpf);
  printf("\n Sexo : %c",      c[quem]->sexo);
  printf("\n Salario %.2f: ", c[quem]->salario);
  printf("\n");
  return true;
}

void pesquisarPorCodigo(int qualCodigo, struct Pessoa** c){ 
  int i, final = retornaUltimo(c);
  for (i=1; i<=final; i++) 
    if (c[i]->codigo == qualCodigo) {
      imprimir(qualCodigo, c);
      break;      
    } // if...
  if (i > final) 
    printf("\n Codigo %d nao encontrado na lista!", qualCodigo);  
}

bool nomeIgual(char nome1[60], char nome2[60]) {
  int i;
  bool resultado = true;
  for (i=0; nome2[i] != '\0'; i++)
    if (nome1[i] == '*')
      break;      
    else if (nome1[i] != nome2[i]) {
      resultado = false;
      break;
      //return(false);
    }   
  return (resultado);
  //return (true);
}

bool pesquisarPorNome(char quem[60], struct Pessoa** c){ 
  int i, final = retornaUltimo(c);
  bool resultado = false;
  for (i=1; i<=final; i++) 
    if (nomeIgual(quem,c[i]->nome)) 
      resultado = imprimir(i, c);
  return resultado;    
}

int imprimirMenu() {
    int resposta;
    printf("\n");
    printf("\n    EXERCICIO LISTAS ORDENADAS E ENCADEADAS  ");
    printf("\n");
    printf("\n     01- CRIAR LISTA");
    printf("\n     02- CADASTRAR CLIENTE NO FINAL");
    printf("\n     03- CADASTRAR CLIENTE NA LISTA ORDENADA");
    printf("\n     04- PESQUISAR CLIENTE POR CODIGO");
    printf("\n     05- PESQUISAR CLIENTE POR NOME");
    printf("\n     06- PESQUISAR CLIENTE POR CPF");
    printf("\n     07- ALTERAR CLIENTE");
    printf("\n     08- EXCLUIR CLIENTE - PILHA");
    printf("\n     09- EXCLUIR CLIENTE - FILA");
    printf("\n     10- EXCLUIR CLIENTE NA POSICAO");
    printf("\n");
    printf("\n   Escolha uma opcao: ");
    scanf("%d",&resposta);
    return(resposta);
}

int main(){
    int numero;
    struct Pessoa *clientes[30];
    do {
    switch (imprimirMenu()) {
      case 1: { inicializaLista(30, clientes); break;}
      case 2: { inserirFinal(clientes); break;}
      case 3: { printf("\n Em manutencao! "); break;}
      case 4: { 
        printf("\n Informe o codigo a pesquisar: ");
        scanf("%d",&numero);
        pesquisarPorCodigo(numero, clientes);
        break;
      }
      case 5: { 
        printf("\n Informe o nome a pesquisar: ");
        char nome[60];
        scanf("%s",&nome);
        if (pesquisarPorNome(nome, clientes) == false)
          printf("\n Nome: %s nao encontrado na lista!", nome);  
        break;
      }
  }
    printf("\n\n");
    printf("\n Deseja executar novamente? (1:Sim / 2:Nao) ");
    scanf("%d",&numero); 
    }
    while (numero == 1);
    
    getch();
}

