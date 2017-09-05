
package lista2;
import java.util.Scanner;
public class Exercicio5 {
    public static void main(String[] args) {
        System.out.println("Digite um numero: ");
        Scanner num1 = new Scanner(System.in);
        int a = num1.nextInt();
        
        System.out.println("Digite outro numero: ");
        Scanner num2 = new Scanner(System.in);
        int b = num2.nextInt();
        
        int c = a + b;
        
        if(c > 10)System.out.println(c);
    }
}
