
public abstract class Conta
{
    double saldo;
    Cliente clientePrimario;
    Cliente clienteSecundario;
    int numero;

    public Conta(int numeroDaConta, Cliente clientePrincipal)
    {
        this.clientePrimario = clientePrincipal;
        this.numero = numeroDaConta;
        this.saldo = 0;
    }

    public double getSaldo()
    {
        return this.saldo;
    }

    public int getNumero()
    {
        return this.numero;
    }

    public Cliente getClientePrincipal()
    {
        return clientePrimario;
    }

    public Cliente getClienteSecundario()
    {
        return clienteSecundario;
    }

    public void setClienteSecundario(Cliente clienteAdicional)
    {
        this.clienteSecundario = clienteAdicional;
    }

    public void depositar(double valorASerDepositado)
    {
        if(valorASerDepositado > 0)
        this.saldo += valorASerDepositado;
    }

    public abstract boolean sacar(double quantiaASerSacada);
}