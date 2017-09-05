package com.jogo.heranca;

public class Principal {
	public static void main(String[] args) {

		Soldado s = new Soldado();
		General g = new General();
		Lutador l = new Lutador();
		Revolver rev = new Revolver();
		Fuzil fuz = new Fuzil();
		Desarmado des = new Desarmado();

		s.desenhar();
		s.falar();
		s.setArma(rev);
		s.arma();

		g.desenhar();
		g.falar();
		g.setArma(fuz);
		g.arma();

		l.desenhar();
		l.setArma(des);
		l.falar();
		l.arma();

	}
}
