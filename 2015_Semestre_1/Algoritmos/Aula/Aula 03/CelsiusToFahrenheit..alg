algoritmo "Celsius > fahrenheit"
// Função : Celsius para fahrenheit
// Autor : Gustavo Clau
// Data : 24/08/2015
// Seção de Declarações
var
vlrCelsius: inteiro
vlrFahrenheit: real

inicio

//inicio
escreval ("-------------------Celsius > fahrenheit-------------------")

//Recebe valor em celsius
escreva ("Digite a temperatura em graus Celsius: ")
leia (vlrCelsius)

//Transforamção dos valores - Celsius para fahrenheit
vlrFahrenheit <- (vlrCelsius * 1.8) + 32

//Exibi o resultado
escreva (vlrCelsius," graus em Celsius equivale a",vlrFahrenheit," graus em Fahrenheit")

fimalgoritmo
