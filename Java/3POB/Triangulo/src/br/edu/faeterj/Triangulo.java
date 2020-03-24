package br.edu.faeterj;

public class Triangulo {
	Ponto p1,p2,p3;

	public Triangulo(Ponto p1, Ponto p2, Ponto p3) {
		// TODO Auto-generated constructor stub
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;

		test_triangle_default();
	}

	public Ponto getP1() {
		// TODO Auto-generated method stub
		return p1;
	}

	public Ponto getP2() {
		// TODO Auto-generated method stub
		return p2;
	}

	public Ponto getP3() {
		// TODO Auto-generated method stub
		return p3;
	}

	public void setP3(Ponto ponto) {
		// TODO Auto-generated method stub
		
		this.p3 = ponto;
		test_triangle_default();
	}

	private void test_triangle_default()
	{
		double a = this.p1.distanciaAte(p2);
		double b = this.p2.distanciaAte(p3);
		double c = this.p3.distanciaAte(p1);
		if( (Math.abs(b-c) <= a && a <= (b+c)) || (Math.abs(a - c) <= b && b <= (a + c)) || (Math.abs(a - b) <= c && c <= (a+b)) )
		{
			p1 = new Ponto( 0,0 );
			p2 = new Ponto( 0,1 );
			p3 = new Ponto( 1,0 );
		}
	}

}
