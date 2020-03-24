package testezera;

public class Proprietario
{
    String nome;
    String sobreNome;
    String cpf;
    int idade;
    char sexo;
    
    public void ExibeDadosDoProprietario(){
        System.out.print("Proprietario: "+this.nome+" ");
        System.out.println(this.sobreNome);
        System.out.println("CPF: "+this.cpf);
        System.out.println("Idade: "+this.idade);
        System.out.println("Sexo: "+this.sexo);
    }
}