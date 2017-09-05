package lista04;

//Gustavo Clay Do Nascimento Lima RGM 15588921
public class Pedido {
	// Atributos
	private int codPedido;
	private String nomeCliente;
	private String desPedido; // descricaoPedido

	// Construtor
	public Pedido(int codPedido, String nomeCliente, String desPedido) {
		super();
		setCodPedido(codPedido);
		setNomeCliente(nomeCliente);
		setDesPedido(desPedido);
	}

	public Pedido() {
		super();
		setCodPedido(codPedido);
		// TODO Auto-generated constructor stub
	}

	// Getters e Setters
	public String getNomeCliente() {
		return nomeCliente;
	}

	public void setNomeCliente(String nomeCliente) {
		this.nomeCliente = nomeCliente;
	}

	public String getDesPedido() {
		return desPedido;
	}

	public void setDesPedido(String desPedido) {
		this.desPedido = desPedido;
	}

	public int getCodPedido() {
		return codPedido;
	}

	public void setCodPedido(int codPedido) {
		this.codPedido = (int) ((int) 1 + (Math.random() * 100));
	}
	// To String

	@Override
	public String toString() {
		return "Pedido [codPedido=" + codPedido + ", nomeCliente=" + nomeCliente + ", desPedido=" + desPedido + "]";
	}

}
