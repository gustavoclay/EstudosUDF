package Lista;
import java.util.Scanner;
public class Exercicio04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Digite um numero desejado: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		if(n > 20){
			n = n / 2;
			System.out.println(n);
		}else{
			System.out.println("Esse numero nao eh maior que 20!");
		}
	}

}
