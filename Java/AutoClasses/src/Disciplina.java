public class Disciplina {
    String nome;
    String sigla;
    int credito;
    Requisicao requisitos;

    public Disciplina(String nome, String sigla, int credito, Requisicao requisitos){
        this.nome = nome;
        this.sigla = sigla;
        this.credito = credito;
        this.requisitos = requisitos;
    }
}
