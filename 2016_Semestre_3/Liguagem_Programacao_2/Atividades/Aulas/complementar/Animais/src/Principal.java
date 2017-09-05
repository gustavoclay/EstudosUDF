
public class Principal {

	public static void main(String[] args) {
		Cachorro totoh, dog; //declara um novo objeto
		totoh = new Cachorro(); //instancia um objeto da classe cachorro
		dog = new Cachorro();
		
		totoh.setIdade(3);
		totoh.setNome("totó");
		totoh.setCor("azul");
		System.out.println(totoh.getIdade());
		System.out.println(totoh.getNome());
		System.out.println(totoh.getCor());
		
		dog.setIdade(-5);
		dog.setNome("bla");
		dog.setCor("preto");
		System.out.println(dog.getIdade());
		System.out.println(dog.getNome());
		System.out.println(dog.getCor());
		
	}

}
