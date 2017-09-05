
package lista2;
import java.util.Scanner;
public class Exercicio6 {
    public static void main(String[] args) {
        System.out.println("Digite um numero: ");
        Scanner num1 = new Scanner(System.in);
        int a = num1.nextInt();
        
        if(a > 0)System.out.println(a/2);
        else if(a < 0)System.out.println(a*a);
    }
}
