package rCondominio;

public class Condominio
{
    String nomeDoCondominio;

    private Bloco         []         blocos;
    private Funcionario   []   funcionarios;
    private Seguranca     []     segurancas;
    private Churrasqueira [] churrasqueiras;

    public Condominio(String nomeDoCondominio, int[][] quantidadeDeApartamentosPorBloco, int quantidadeDeFuncionarios, int quantidadeDeSegurancas, int quantidadeDeChurrasqueiras)
    {
        this.nomeDoCondominio = nomeDoCondominio;


        blocos         =  new Bloco          [quantidadeDeBlocos]        ;
        funcionarios   =  new Funcionario    [quantidadeDeFuncionarios]  ;
        segurancas     =  new Seguranca      [quantidadeDeSegurancas]    ;
        churrasqueiras =  new Churrasqueira  [quantidadeDeChurrasqueiras];


        blocos[0] = new Sede(numeroDeApartamentos);
        for(int i = 1; i < blocos.length; i++)
        {
            blocos[i] = new Bloco(quantidadeDeApartamentosPorBloco[i], i);
        }
    }

    public static void main(String[] args)
    {
        Condominio recreioDosGatos = new Condominio("Recreio dos Gatos", new int[][] {{101, 132, 0, 0}, {101, 138, 0, 0}, {101, 119, 201, 219}, {101, 119, 201, 219}, {101, 127, 201, 227}}, 13, 6, 2);
    }
}