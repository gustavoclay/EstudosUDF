
package lista2;
import java.util.Scanner;
public class Exercicio10 {
    public static void main(String[] args) {
        System.out.println("Digite um numero: ");
        Scanner num = new Scanner(System.in);
        int a = num.nextInt();
		
	if(a > 20 && a < 90) System.out.println("O numero está entre 20 e 90!");
	else System.out.println("O numero não está entre 20 e 90!");
    }
}
