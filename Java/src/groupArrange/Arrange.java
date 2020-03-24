import java.util.LinkedHashMap;
import java.util.LinkedList;

import com.sun.java_cup.internal.runtime.Scanner;

public class Arrange {
    private ConjuntoDuplo conjunto = new ConjuntoDuplo();

    public static void main(String[] args) {
        ConjuntoDuplo pacotinho = new ConjuntoDuplo();

        java.util.Scanner scan = new Scanner(System.in);
        System.out.println("1 - Adicionar ao conjunto");
        System.out.println("2 - Visualizar conjunto");
        System.out.println("> ");
        int escolha = scan.nextInt();

        switch(escolha)
        {
            case 1:
                int escolhaAux = scan.nextInt();
                pacotinho.add();
            break;
            case 2:
            break;
        }
    }
}

public class ConjuntoDuplo {
    private Map<String, LinkedList<String>> conjuntos = new LinkedHashMap<String, LinkedList<String>>();
    
    public boolean add(String Macro, String Micro)
    {
        if(!conjuntos.containsKey(Macro))
        {
            conjuntos.put(Macro, new LinkedList<String>());
        }

        if(!conjuntos.get(Macro).contains(Micro))
        {
            conjuntos.get(Macro).add(Micro);
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class Memoria {
    private String nomeDeArquivo;

    public Memoria(String nomeDoArquivo) {
        this.nomeDeArquivo = nomeDoArquivo;
    }

    public boolean salvar(ConjuntoDuplo mapeamento) {

    }
    
    public boolean carregar(ConjuntoDuplo espacoDeMapa) {
        
    }
}