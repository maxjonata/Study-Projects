package br.com.mbelo.entidade;

public class Pessoa
{
    private String nome;
    private int idade;
    private char sexo;
    private double altura;

    public double calcularPesoIdeal()
    {
        return ((altura * altura) * 22.487654320987654320987654320988);
    }

    public String mostrarSaudacao()
    {
        return ("Ola " + nome);
    }

    public void setAltura(double altura)
    {
        this.altura = altura;
    }

    public void setSexo(char sexo)
    {
        this.sexo = sexo;
    }

    public void setIdade(int idade)
    {
        this.idade = idade;
    }

    public void setNome(String nome)
    {
        this.nome = nome;
    }

    public double getAltura()
    {
        return altura;
    }

    public char getSexo()
    {
        return sexo;
    }

    public int getIdade()
    {
        return idade;
    }

    public String getNome()
    {
        return nome;
    }

}