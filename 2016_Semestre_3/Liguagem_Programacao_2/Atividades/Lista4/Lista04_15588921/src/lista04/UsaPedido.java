package lista04;

//Gustavo Clay Do Nascimento Lima RGM 15588921
public class UsaPedido {
	public static void main(String[] args) {
		Pedido pedido1 = new Pedido();
		System.out.println(pedido1.toString());
		pedido1.setDesPedido("2 Galaxy 7");
		pedido1.setNomeCliente("Gustavo");
		System.out.println(pedido1.toString());

		Pedido pedido2 = new Pedido();
		System.out.println(pedido2.toString());
		pedido2.setDesPedido("2 Moto G");
		pedido2.setNomeCliente("Joao");
		System.out.println(pedido2.toString());

	}
}
