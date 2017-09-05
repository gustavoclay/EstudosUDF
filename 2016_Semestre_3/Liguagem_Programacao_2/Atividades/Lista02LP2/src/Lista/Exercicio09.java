package Lista;
import java.util.Scanner;
public class Exercicio09 {
	public static void main(String[] args){
		System.out.println("Digite o peso da primeira pessoa: ");
		Scanner pes1 = new Scanner(System.in);
		float peso1 = pes1.nextFloat();
		
		System.out.println("Digite o peso da segunda pessoa: ");
		Scanner pes2 = new Scanner(System.in);
		float peso2 = pes2.nextFloat();
		
		if(peso1 > peso2){
			System.out.println("A primeira pessoa eh mais pesada! " + peso1);
		}else{
			System.out.println("A segunda pessoa eh mais pessada! " + peso2);
		}
	}
}
