package Lista;
import java.util.Scanner;
public class Exercicio11 {

	public static void main(String[] args) {
		
		System.out.println("Digite o numero: ");
		Scanner input = new Scanner(System.in);
		int n1 = input.nextInt();
		
		System.out.println("Digite o numero: ");
		int n2 = input.nextInt();
		
		if(n1 < n2){
			System.out.println(" primeiro numero eh o menor!");
		}
		if(n2 > n1){
			System.out.println("O segundo numero eh maior!");
		}else{
			System.out.println("Os numeros sao iguais!");
		}
	}

}
