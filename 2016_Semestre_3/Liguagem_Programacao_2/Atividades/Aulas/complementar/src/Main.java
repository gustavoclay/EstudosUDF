
public class Main {

	public static void main(String[] args) {
		// Declara um objeto do tipo robô
		Robo primeiroRobo, robo2;
		// Instancia um objeto
		primeiroRobo = new Robo();
		robo2 = new Robo(-10, 10);
		
		primeiroRobo.setX(10.32f);
		primeiroRobo.setY(8);
		primeiroRobo.status();
		
		robo2.status();

	}

}
