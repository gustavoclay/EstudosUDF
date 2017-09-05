
package lista2;
import java.util.Scanner;
public class Exercicio7 {
    public static void main(String[] args) {
        System.out.println("Digite um numero: ");
        Scanner num1 = new Scanner(System.in);
        int a = num1.nextInt();
        int count = 0;
		for(int i = 1; i <= a; i++){
			if(a % i == 0){
				count = count + 1;
			}
		}
		if(count == 2){
			System.out.println("O numero " + a + " é primo!");
		}else{
			System.out.println("O numero " + a + " nao é primo!");
		}
    }
}
