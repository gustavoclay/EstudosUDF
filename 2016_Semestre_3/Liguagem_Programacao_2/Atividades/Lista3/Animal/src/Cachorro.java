
public class Cachorro {
	// ATRIBUTOS
	private int idade;
	private String nome;
	private String cor;
	private float altura;


	// CONSTRUTOR - não possui retorno e o nome tem q ser exatamente o nome da classe
	public Cachorro() {
		super();// Chama o construtor pai da superclasse
	}

	public Cachorro(int idade) {
		super();
		// this.idade = idade; usar sempre get e set já existente
		setIdade(idade);
	}

	public Cachorro(int idade, String nome) {
		super();
		setIdade(idade);
		setNome(nome);
	}

	public Cachorro(int idade, String nome, String cor) {
		super();
		setIdade(idade);
		setCor(cor);
		setNome(nome);
	}
	
	public Cachorro(int idade, String nome, String cor, float altura){
		super();
		setIdade(idade);
		setCor(cor);
		setNome(nome);
		setAltura(altura);
	}

	// METODOS - FUNÇÔES
	public String toString() {
		return (nome + " - " + idade + " - " + cor + " - " + altura);

	}

	public void andar() {

	}

	public void latir() {

	}

	public void comer() {

	}

	// SETTER E GETTERS - ATRIBUTOS
	public void setIdade(int idade) {
		if (idade > 0)
			this.idade = idade;
		else
			this.idade = 0;
	}

	public int getIdade() {
		return idade;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}
	public float getAltura() {
		return altura;
	}

	public void setAltura(float altura) {
		if(altura > 0)
			this.altura = altura;
		else
			this.altura = 0;
		
	}
}
