
public class ContaEspecial extends Conta
{
    double limiteDeCredito;
    public ContaEspecial(int numeroDaConta, Cliente clientePrincipal, double limiteDeCreditoDaConta)
    {
        super(numeroDaConta, clientePrincipal);
        this.limiteDeCredito = (Math.abs(limiteDeCreditoDaConta) * -1);
    }

    public boolean sacar(double quantiaASerSacada)
    {
        if(saldo-quantiaASerSacada >= limiteDeCredito)
            super.saldo -= quantiaASerSacada;
        else return false;

        return true;
    }
}