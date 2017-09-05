
package lista2;

import java.util.Scanner;

public class Exercicio15 {
    public static void main(String[] args){
        System.out.println("Digite um numero: ");
        Scanner input = new Scanner(System.in);
	int n = input.nextInt();
	int x = 1;
		
	for(int i=1; i<= n; i++){
            System.out.println(i);
            x = x * i;
	}
	System.out.println("Produto: " + x);
    }
}
