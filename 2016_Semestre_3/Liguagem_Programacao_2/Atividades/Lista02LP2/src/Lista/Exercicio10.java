package Lista;
import java.util.Scanner;
public class Exercicio10 {

	public static void main(String[] args) {
		System.out.println("Digite um numero: ");
		Scanner num = new Scanner(System.in);
		int n = num.nextInt();
		
		if(n > 20 && n < 90){
			System.out.println("O numero esta entre 20 e 90!");
		}else{
			System.out.println("O numero nao esta entre 20 e 90!");
		}

	}

}
