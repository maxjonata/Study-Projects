package br.com.mbelo.entidade;
import org.junit.Assert;
import org.junit.Test;

public class TestaPessoa {
	
	@Test
	public void criaPessoaTest() {
		Pessoa leo = new Pessoa();
		Assert.assertTrue(leo != null);
	}
	
	@Test
	public void testaPessoaNome() {
		Pessoa leo = new Pessoa();
		leo.setNome("Leo");
		Assert.assertTrue(leo.getNome().equals("Leo"));
	}
	
	@Test
	public void testaPessoaIdade() {
		Pessoa leo = new Pessoa();
		leo.setIdade(45);
		Assert.assertTrue(leo.getIdade()==45);
	}
	
	@Test
	public void testaPessoaSexo() {
		Pessoa leo = new Pessoa();
		leo.setSexo('M');
		Assert.assertTrue(leo.getSexo()=='M');
	}
	
	@Test
	public void testaPessoaAltura() {
		Pessoa leo = new Pessoa();
		leo.setAltura(1.80);
		Assert.assertTrue(leo.getAltura()==1.80);
	}
	
	@Test
	public void testaSaudacao() {
		Pessoa leo = new Pessoa();
		leo.setNome("Leo");
		String aux = leo.mostrarSaudacao();
		Assert.assertTrue(aux.equals("Ola Leo"));
	}
	
	@Test
	public void testaCalcularPesoIdeal() {
		Pessoa leo = new Pessoa();
		leo.setAltura(1.80);
		double pesoIdeal = leo.calcularPesoIdeal();
		Assert.assertEquals(72.86, pesoIdeal,0.01);
	}

}
