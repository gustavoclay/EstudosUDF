
package lista2;
import java.util.Scanner;
public class Exercicio12 {
    public static void main(String[] args) {
        int n1;
	int triplo;
	System.out.println("Digite a quantidade de numeros desejados: ");
	Scanner input = new Scanner(System.in);
	int qtd = input.nextInt();
	
	for(int n = 1; n <= qtd; n++){
            System.out.println("Digite o numero: ");
            Scanner num = new Scanner(System.in);
            n1 = num.nextInt();
            
            triplo = n1 * 3;
            System.out.println("O triplo de "+ n1 + " é: "+ triplo);
		}
    }
}
