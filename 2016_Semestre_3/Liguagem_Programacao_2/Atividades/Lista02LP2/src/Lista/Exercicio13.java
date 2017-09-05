package Lista;
import java.io.IOException;
import java.util.Scanner;
public class Exercicio13 {

	public static void main(String[] args) throws IOException {
		for(int i=0; i < 3; i++){
			System.out.print("Digite seu nome: ");
			Scanner input = new Scanner(System.in);
			String nome = input.nextLine();
			
			System.out.print("Digite sua idade: ");
			Scanner n = new Scanner(System.in);
			int idade = n.nextInt();
			
			System.out.print("Digite seu sexo: ");
			Scanner s = new Scanner(System.in);
			char sexo = (char)System.in.read();
			
			if(idade >= 21 && sexo == 'M'){
				System.out.println(nome);
			}
		}
	}

}
