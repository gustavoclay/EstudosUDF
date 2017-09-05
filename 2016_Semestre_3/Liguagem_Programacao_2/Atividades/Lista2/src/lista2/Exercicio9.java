
package lista2;
import java.util.Scanner;
public class Exercicio9 {
    public static void main(String[] args) {
        System.out.println("Digite o peso da pessoa 1: ");
		Scanner pes1 = new Scanner(System.in);
		float peso1 = pes1.nextFloat();
		
		System.out.println("Digite o peso da pessoa 2: ");
		Scanner pes2 = new Scanner(System.in);
		float peso2 = pes2.nextFloat();
		
		if(peso1 > peso2){
			System.out.println("A pessoa 1 é mais pesada! Peso: " + peso1);
		}else{
			System.out.println("A pessoa 2 é mais pesada! Peso: " + peso2);
		}
    }
}
