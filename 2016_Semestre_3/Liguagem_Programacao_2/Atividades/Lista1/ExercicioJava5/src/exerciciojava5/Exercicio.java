/*
6.	Imprima os primeiros números da série de Fibonacci até passar de 100. 
A série de Fibonacci é a seguinte: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc... 
Para calculá-la, o primeiro elemento vale 0, 
o segundo vale 1, daí por diante, 
o n-ésimo elemento vale o (n-1)-ésimo elemento somado ao (n-2)-ésimo elemento (ex: 8 = 5 + 3).
 */
package exerciciojava5;
public class Exercicio {
    public static void main(String[] args) {
        int a, b, aux, i, n;
        a=0;
        b=1;
        n=11;
        
        for(i=0; i<n; i++){
            aux = a+b;
            a=b;
            b= aux;
                
            System.out.println(aux + "\n");
            }
        }
    }
