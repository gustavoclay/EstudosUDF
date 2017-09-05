package Lista;
import java.util.Scanner;
public class Exercicio08 {

	public static void main(String[] args) {
		System.out.println("Digite a primeira nota: ");
		Scanner num1 = new Scanner(System.in);
		float n1 = num1.nextFloat();
		
		System.out.println("Digite a segunda nota: ");
		Scanner num2 = new Scanner(System.in);
		float n2 = num2.nextFloat();
		
		System.out.println("Digite a terceira nota: ");
		Scanner num3 = new Scanner(System.in);
		float n3 = num3.nextFloat();
		
		float media = (n1*2 + n2*3 + n3*5) / 10;
		
		if(media >= 6.0){
			System.out.println("Aluno aprovado! com nota: " + media);
		}else{
			System.out.println("Aluno nao aprovado!" + media);
		}

	}

}
