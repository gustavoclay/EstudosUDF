
package lista2;
import java.util.Scanner;
public class Exercicio11 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Digite o numero: ");
	int a = input.nextInt();
		
	System.out.println("Digite outro numero: ");
	int b = input.nextInt();
		
	if(a < b)System.out.println(" menor: " + a);
        if(b < a)System.out.println(" menor: " + b);
        
        if(a > b)System.out.println(" maior: " + a);
        if(b > a)System.out.println(" maior: " + b);
        
        if(a == b)System.out.println(" Numeros iguais " + a);
    }
}
