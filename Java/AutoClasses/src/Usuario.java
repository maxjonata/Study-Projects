import java.util.ArrayList;

public class Usuario {
    ArrayList<Disciplina> disciplinasConcluidas;
    ArrayList<Integer> periodosConcluidos;
    int creditosDisponiveis;
    Disciplina[/*5*/][/*6*/] Matriz;

    public Usuario() {
        Matriz = new Disciplina[5][6];                              //Feito pelo programa.
        creditosDisponiveis     =   0;                              //Preencher em Criação
        disciplinasConcluidas   =   new ArrayList<Disciplina>();    //Preencher em Crianção
        periodosConcluidos      =   new ArrayList<Integer>();       //Preencher em Criação
    }
}
