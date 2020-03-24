
public class Funcionario
{
    private int matricula;
    private String nome;
    private double salario;

    public Funcionario(Funcionario [] listaFuncionarios)
    {
        if(listaFuncionarios != null)
        {
            matricula = listaFuncionarios.length + 1;
        }
        else
        {
            matricula = 1;
        }
    }
    
    public void setSalario(double salario) {
        if(salario < 350.0)
        {
            throw new ViolacaoCltException("Salario abaixo do mínimo esperado", 76);
        }
        else if(salario > (this.salario + ((this.salario / 100) * 10)))
        {
            throw new AumentoAbsurdoException();
        }
        else
        {
            this.salario = salario;
        }
    }

    public void setNome(String nome) {
        if(nome.length() > 40)
        {
            throw new IllegalAccessError("Nome tem mais de 40 caracteres");
        }
        else
        {
            this.nome = nome;
        }
    }

    public double getSalario() {
        return salario;
    }

    public String getNome() {
        return nome;
    }

    public int getMatricula() {
        return matricula;
    }
}

public class ViolacaoCltException extends IllegalArgumentException
{
    int codigoClt;
    public ViolacaoCltException(String mensagemDeErro, int codClt)
    {
        super(mensagemDeErro);
        this.codigoClt = codClt;
    }

    public int getCodigo()
    {
        return codigoClt;
    }
}

public class AumentoAbsurdoException extends RuntimeException
{
    public AumentoAbsurdoException()
    {
        super("Aumento excecivo recebido no salário");
    }
}