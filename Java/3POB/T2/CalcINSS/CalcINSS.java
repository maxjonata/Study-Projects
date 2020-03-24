import java.util.Scanner;

public class CalcINSS
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        funcionario funcionarios[] = new funcionario[10];

        for(int i = 0; i < funcionarios.length; i++)       //Leitura
        {
            int matricula = 0;
            double salario = 0.0;
            String nome = "";
            if(i == 0)
            {
                System.out.println("Iniciando registro para " + funcionarios.length + " funcionarios ...");
                System.out.print(System.lineSeparator());
            }

            //Matricula

            do
            {
                System.out.println("Matricula do funcionario (" + (i+1) + "/" + funcionarios.length + ")");
                while(!scan.hasNextInt())
                {
                    System.out.println("Matricula precisa ser um numero inteiro.");
                    scan.next();
                }
                matricula = scan.nextInt();
                scan.nextLine();
                System.out.print(System.lineSeparator());
            } while(!matriculaValida(funcionarios, matricula));

            //Nome

            System.out.println("Digite o nome do funcionario (" + matricula + ")");
            nome = scan.nextLine();
            System.out.print(System.lineSeparator());

            //Salario

            System.out.println("Salario de " + nome.split(" ", 2)[0] + " sera de:");
            System.out.print("R$ ");
            while(!(scan.hasNextDouble() || scan.hasNextInt()))
            {
                System.out.println("Salario recisa ser um numero.");
                System.out.print("R$ ");
                scan.next();
            }
            salario = scan.nextDouble();
            System.out.print(System.lineSeparator());

            //Salvando
            funcionarios[i] = new funcionario(nome, matricula, salario);
        }
    
        for(byte i = 0; i < funcionarios.length; i++)       //Mostrando INSS
        {
            System.out.println(funcionarios[i].getMatricula() + " - " + funcionarios[i].getNome());
            System.out.println("INSS a ser pago: R$" + funcionarios[i].calcularInss());
            System.out.print(System.lineSeparator());
        }
    }

    private static boolean matriculaValida(funcionario array[], int matriculaTestada) //Método para testar matrículas iguais
    {
        int i = 0;
        while(array[i] != null)
        {
            if(array[i].getMatricula() == matriculaTestada)
            {
                return false;
            }
            i++;
        }

        return true;
    }
}

class funcionario extends CalcINSS
{
    private int matricula;
    private double salario;
    private double imposto;
    private String nome;

    public funcionario()
    {
        this.matricula = 0;
        this.nome = "";
        this.salario = 0.0;
    }

    public funcionario(String nome, int matricula, double salario)
    {
        this.nome = nome;
        this.matricula = matricula;
        this.salario = salario;
    }

    public void alteraMatricula(int novaMatricula)
    {
        this.matricula = novaMatricula;
    }

    public void alteraSalario(double novoSalario)
    {
        if(novoSalario > 0)
        {
            this.salario = novoSalario;
        }
    }
    
    public void alteraNome(String novoNome)
    {
        this.nome = novoNome;
    }

    public double calcularInss()
    {
        if(salario <= 720.0)
        {
            this.imposto = 0.0765;
        }
        else if(salario <= 1200.0)
        {
            this.imposto = 0.09;
        }
        else if(salario <= 2400.0)
        {
            this.imposto = 0.11;
        }
        /*
            else
            {
                Creio que deveria ter um valor caso fosse maior que 2400 ou algum retorno de erro aqui.
            }
        */
        return (this.salario * this.imposto);
    }

    public String getNome()
    {
        return this.nome;
    }

    public int getMatricula()
    {
        return this.matricula;
    }
    
    public double getSalario()
    {
        return this.salario;
    }
}