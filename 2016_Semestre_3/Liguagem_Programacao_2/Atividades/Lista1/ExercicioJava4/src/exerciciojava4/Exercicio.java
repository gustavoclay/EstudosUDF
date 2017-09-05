/*
4.	Imprima os fatoriais de 1 a 10.
O fatorial de um número n é n * n-1 * n-2 ... até n = 1. Lembre-se de utilizar os parênteses.
O fatorial de 0 é 1
O fatorial de 1 é (0!) * 1 = 1
O fatorial de 2 é (1!) * 2 = 2
O fatorial de 3 é (2!) * 3 = 6
O fatorial de 4 é (3!) * 4 = 24

 */
package exerciciojava4;
public class Exercicio {
    public static void main(String[] args) {
        long fat, i, x;
        for(i=1; i<=20; i++){
            x=i;
            for(fat = 1; x > 1; x = x - 1){
                fat = fat * x;
            }
            System.out.println("Fatorial de " + i + " = " + fat + "\n");
        }
    }
}
