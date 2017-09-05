package Lista;
import java.util.Scanner;
public class Exercicio05 {

	public static void main(String[] args) {
		System.out.println("Digite o numero: ");
		Scanner num1 = new Scanner(System.in);
		int n1 = num1.nextInt();
		
		System.out.println("Digite o numero: ");
		Scanner num2 = new Scanner(System.in);
		int n2 = num2.nextInt();
		
		int soma = n1 + n2;
		
		if(soma > 10){
			System.out.println("O resultado eh: " + soma);
		}else{
			System.out.println(soma + "," + " O resultado nao eh maior que 10!");
		}
		
	}

}
