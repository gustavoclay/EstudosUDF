package com.jogo.heranca;

public abstract class Personagem {
	Arma_IF arma;

	public abstract void desenhar();

	public void falar() {
		System.out.println("put the cookie down! now...");

	}

	public Arma_IF getArma() {
		return arma;
	}

	public void setArma(Arma_IF arma) {
		this.arma = arma;
	}

	public void arma() {
		arma.usarArma();
	}

}
