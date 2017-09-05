
public class Principal {

	public static void main(String[] args) {
		Cachorro totoh, dog, dog3, dog4, dog5, dog6; // declara uma variavel novo
												// objeto
		totoh = new Cachorro(); // instancia um objeto da classe cachorro
		dog = new Cachorro();
		dog3 = new Cachorro(10);
		dog4 = new Cachorro(5, "Hulk");
		dog5 = new Cachorro(10, "Harold", "Vermelho");
		dog6 = new Cachorro(7, "Cris Dias", "Azul", 0.50f);

		totoh.setIdade(3);
		totoh.setNome("totó");
		totoh.setCor("azul");
		System.out.println(totoh.toString());

		dog.setIdade(-5);
		dog.setNome("bla");
		dog.setCor("preto");
		System.out.println(dog.toString());

		System.out.println(dog3.toString());

		System.out.println(dog4.toString());

		System.out.println(dog5.toString());
		
		System.out.println(dog6.toString());

	}

}
