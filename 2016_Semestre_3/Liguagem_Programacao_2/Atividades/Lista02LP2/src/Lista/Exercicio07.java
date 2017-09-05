package Lista;
import java.util.Scanner;
public class Exercicio07 {

	public static void main(String[] args) {
		System.out.println("Digite um numero: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int count = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				count = count + 1;
			}
		}
		if(count == 2){
			System.out.println("O numero " + n + " eh primo!");
		}else{
			System.out.println("O numero " + n + " nao eh primo!");
		}
	}

}
