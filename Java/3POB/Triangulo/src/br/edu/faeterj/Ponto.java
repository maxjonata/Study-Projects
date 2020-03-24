package br.edu.faeterj;

public class Ponto {
	
	private int x, y;

	public Ponto(int x, int y) {
		this.x = x;
		this.y = y;
	}

	public double getX() {
		return x;
	}

	public double getY() {
		return y;
	}

	public double distanciaAte(Ponto p2) {
		return Math.sqrt( Math.pow(p2.x - this.x, 2) + Math.pow(p2.y - this.y, 2) );
	}

}
