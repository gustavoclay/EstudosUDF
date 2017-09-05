package Lista;
import java.util.Scanner;
public class Exercicio15 {

	public static void main(String[] args) {
		System.out.println("Digite um numero: ");
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int prod = 1;
		
		for(int i=1; i<= n; i++){
			System.out.println(i);
			prod = prod * i;
		}
		System.out.println("O produto do numero "+ n +" eh: "+prod);

	}

}
