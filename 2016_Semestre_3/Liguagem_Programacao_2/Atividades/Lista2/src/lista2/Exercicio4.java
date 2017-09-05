
package lista2;
import java.util.Scanner;
public class Exercicio4 {
    public static void main(String[] args) {
        System.out.println("Digite um numero: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        
        if(a >= 20)System.out.println(a/2);
        else System.out.println("Este número não é maior que 20!");
    }
}
