algoritmo "COMPRIMENTO DA CIRCUNFERENCIA E AREA DE UM CIRCULO"
// Fun��o : Algoritmo que solicita o raio de uma circunfer�ncia e mostre o di�metro, comprimento e �rea
// Autor : Gustavo Clay
// Data : 24/08/2015
// Se��o de Declara��es 
var
// Variaveis
vlrR, vlrD, vlrC, vlrA :Real

inicio
// Algoritmo que solicita o raio de uma circunfer�ncia e mostre o di�metro, comprimento e �rea

//inicio
escreval ("-------------------COMPRIMENTO DA CIRCUNFERENCIA E AREA DE UM CIRCULO-------------------")
	
//Recebe valor em celsius
escreva ("Digite o valor do Raio: ")
leia (vlrR)

//Calculando o diametro
vlrD <- (2*vlrR)

//Calculando o comprimento
vlrC <- (Pi*vlrD)

//Calculando o �rea
vlrA <- (Pi*(vlrR*vlrR))
	
//Exibir o resultado
escreval ("Diametro: ",(vlrD):4:2)
escreval ("Comprimento da circunferencia: ",(vlrC):4:2)
escreval ("Area do circulo: ",(vlrA):4:2)

fimalgoritmo
