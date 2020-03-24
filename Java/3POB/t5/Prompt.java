import java.util.Scanner;
import java.util.List;
import java.util.LinkedList;

public class Prompt
{
    private List<String> listaDeNomes = new LinkedList<>();

    public void getCommand()
    {
        Scanner scan = new Scanner(System.in);
        System.out.println();
        System.out.println(">");
        String comando = scan.next();
        char menuChoice = comando.charAt(0);
        comando = comando.substring(1);
        switch(menuChoice)
        {
            case '+': addToList(comando);
            break;
            case '-': removeFromList(comando);
            break;
            case 'L': listar();

        }
    }
    
    private void addToList(String nome)
    {
        listaDeNomes.add(nome);
    }

    private void removeFromList(String nome)
    {
        listaDeNomes.remove(nome);
    }

    private void listar()
    {
        int iterator = 0;
        while(iterator <= listaDeNomes.size())
        {
            System.out.println((iterator+1) + ". " + listaDeNomes.get(iterator));
        }
    }
}