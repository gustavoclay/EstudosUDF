package correcaoProva;

import javax.swing.JOptionPane;

public class Q01 {
	public static void main(String[] args) {
		int num1, num2;
		num1 = Integer.parseInt(JOptionPane.showInputDialog("Digite um n�mero: "));
		do {
			num2 = Integer.parseInt(JOptionPane.showInputDialog("Digite um n�mero: "));
			if (num2 < num1)
				break;
			num1 = num2;
		} while (true);
		JOptionPane.showMessageDialog(null, "fim!");
	}
}