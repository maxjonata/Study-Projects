
public class ContaNormal extends Conta
{
    //SALDO NÃO PODE SER MENOR QUE 0
    public ContaNormal(int numeroDaConta, Cliente clientePrincipal)
    {
        super(numeroDaConta, clientePrincipal);
    }

    public boolean sacar(double quantiaASerSacada)
    {
        if(saldo-quantiaASerSacada >= 0)
            super.saldo -= quantiaASerSacada;
        else return false;

        return true;
    }

}