
package lista2;
import java.util.Scanner;
public class Exercicio8 {
    public static void main(String[] args) {
        System.out.println("Nota 1: ");
		Scanner num1 = new Scanner(System.in);
		float nota1 = num1.nextFloat();
		
		System.out.println("Nota 2: ");
		Scanner num2 = new Scanner(System.in);
		float nota2 = num2.nextFloat();
		
		System.out.println("Nota 3: ");
		Scanner num3 = new Scanner(System.in);
		float nota3 = num3.nextFloat();
		
		float media = (nota1*2 + nota2*3 + nota3*5) / 10;
		
		if(media >= 6.0){
			System.out.println("Aprovado. Media: " + media);
		}else{
			System.out.println("Reprovado. Media: " + media);
		}
    }
}
