public class Cliente
{
    private int cpf;
    private String nome;

    public Cliente(int cpfDoCliente, String nomeDoCliente)
    {
        this.cpf = cpfDoCliente;
        this.nome = nomeDoCliente;
    }

    public int getCPF()
    {
        return this.cpf;
    }

    public String getNome()
    {
       return this.nome;
    }

    public void setNome(String novoNome)
    {
        this.nome = novoNome;
    }
}