package Lista;
import java.util.Scanner;
public class Exercicio06 {

	public static void main(String[] args) {
		
		System.out.println("Digite um numero: ");
		Scanner num = new Scanner(System.in);
		int n = num.nextInt();
		
		if(n > 0){
			n = n / 2;
			System.out.println("A metade do numero eh: " + n);
		}else{
			n = n * n;
			System.out.println("O quadrado do numero eh: " + n);
		}

	}

}
