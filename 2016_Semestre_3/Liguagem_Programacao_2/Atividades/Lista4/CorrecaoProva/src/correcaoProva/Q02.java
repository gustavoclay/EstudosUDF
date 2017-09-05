package correcaoProva;

import javax.swing.JOptionPane;

public class Q02 {
	public static void main(String[] args) {
		int a, b, c;

		a = Integer.parseInt(JOptionPane.showInputDialog("Digite o lado A: "));
		b = Integer.parseInt(JOptionPane.showInputDialog("Digite o lado B: "));
		c = Integer.parseInt(JOptionPane.showInputDialog("Digite o lado C: "));

		if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))) {
			JOptionPane.showMessageDialog(null, "Forma um triangulo");
		} else
			JOptionPane.showMessageDialog(null, "Não Forma um triangulo");

	}
}
