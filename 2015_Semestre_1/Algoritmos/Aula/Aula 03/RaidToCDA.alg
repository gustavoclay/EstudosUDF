algoritmo "COMPRIMENTO DA CIRCUNFERENCIA E AREA DE UM CIRCULO"
// Função : Algoritmo que solicita o raio de uma circunferência e mostre o diâmetro, comprimento e área
// Autor : Gustavo Clay
// Data : 24/08/2015
// Seção de Declarações 
var
// Variaveis
vlrR, vlrD, vlrC, vlrA :Real

inicio
// Algoritmo que solicita o raio de uma circunferência e mostre o diâmetro, comprimento e área

//inicio
escreval ("-------------------COMPRIMENTO DA CIRCUNFERENCIA E AREA DE UM CIRCULO-------------------")
	
//Recebe valor em celsius
escreva ("Digite o valor do Raio: ")
leia (vlrR)

//Calculando o diametro
vlrD <- (2*vlrR)

//Calculando o comprimento
vlrC <- (Pi*vlrD)

//Calculando o área
vlrA <- (Pi*(vlrR*vlrR))
	
//Exibir o resultado
escreval ("Diametro: ",(vlrD):4:2)
escreval ("Comprimento da circunferencia: ",(vlrC):4:2)
escreval ("Area do circulo: ",(vlrA):4:2)

fimalgoritmo
