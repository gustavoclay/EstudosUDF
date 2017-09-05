
package lista2;
import java.io.IOException;
import java.util.Scanner;
public class Exercicio13 {
    public static void main(String[] args) throws IOException {
        System.out.print("Digite o seu nome: ");
        Scanner input = new Scanner(System.in);
        String nome = input.nextLine();
			
	System.out.print("Digite a sua idade: ");
	Scanner i = new Scanner(System.in);
	int idade = i.nextInt();
			
	System.out.print("Digite o seu sexo: ");
	Scanner s = new Scanner(System.in);
	char sexo = (char)System.in.read();
	
	if(idade >= 21 && sexo == 'M'){
		System.out.println(nome);
	}
    }
}
