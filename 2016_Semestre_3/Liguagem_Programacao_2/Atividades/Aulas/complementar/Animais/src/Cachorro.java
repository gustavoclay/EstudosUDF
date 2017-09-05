
public class Cachorro {
	private int idade;
	private String nome;
	private String cor;
	
	public void setIdade(int idade) {
		if (idade>0)
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
}
