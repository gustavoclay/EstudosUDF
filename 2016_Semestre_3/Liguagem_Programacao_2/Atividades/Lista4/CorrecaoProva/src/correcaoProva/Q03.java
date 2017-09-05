package correcaoProva;

import javax.swing.JOptionPane;

public class Q03 {
	public static void main(String[] args) {
		int num;
		num = Integer.parseInt(JOptionPane.showInputDialog("Digite um numero: "));

		for (int i = 1; i < num; i++) {
			if (num % i == 0)
				System.out.println(i);
		}
	}
}
