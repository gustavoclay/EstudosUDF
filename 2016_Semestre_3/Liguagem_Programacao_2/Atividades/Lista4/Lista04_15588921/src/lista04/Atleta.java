package lista04;

public class Atleta {
	// Atributos
	private int CPF;
	private String nome;
	private String modalidade;
	private int idade;

	// Construtor

	public Atleta() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Atleta(int cPF, String nome, String modalidade, int idade) {
		super();
		setCPF(cPF);
		setNome(nome);
		setModalidade(modalidade);
		setIdade(idade);
	}

	// Getters e Setters
	public double getCPF() {
		return CPF;
	}

	public void setCPF(int cPF) {
		this.CPF = cPF;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getModalidade() {
		return modalidade;
	}

	public void setModalidade(String modalidade) {
		if (modalidade == "futebol" || modalidade == "volei" || modalidade == "basquete")
			this.modalidade = modalidade;
		else
			this.modalidade = "inválida";

	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		if (idade >= 18)
			this.idade = idade;
		else
			this.idade = 18;
	}

	// To String
	@Override
	public String toString() {
		return "Atleta [CPF=" + CPF + ", nome=" + nome + ", modalidade=" + modalidade + ", idade=" + idade + "]";
	}

}
