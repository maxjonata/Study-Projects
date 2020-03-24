import java.util.Random;
import java.util.Scanner;

public class ViacaoTartaruga
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String estados[] = {"RJ", "SP", "MG", "RS", "RO", "BA", "SE", "SC", "AM", "AC", "AL", "CE", "RR", "RN", "PE", "ES"};
        Random rand = new Random();
        Veiculo frota[] = new Veiculo[12];
        int comando, onibus;

        for(int i = 0; i < 12; i++) //criando frotas aleatórias com valores diferentes
        {
            int estado1 = rand.nextInt(estados.length);
            int capacidade = rand.nextInt(50)+10;
            int ocupados = rand.nextInt(capacidade-1);
            int estado2;

            do
            {
                estado2 = rand.nextInt(estados.length);
            } while(estado1 == estado2);

            frota[i] = new Veiculo(capacidade, estados[estado1], estados[estado2]);

            do
            {
                frota[i].comprar();
            } while((frota[i].getNumAssentos() - frota[i].getNumAssentosDisponiveis()) <= ocupados);
        }

        do
        {
            for(int i = 0; i < 12; i++)
            {
                String number = String.format("%02d", (i+1));
                System.out.println(number + ": " + frota[i].getEstadoOrigem() + "-" + frota[i].getEstadoDestino() + "(" + frota[i].getNumAssentosDisponiveis() + " assentos disponiveis de " + frota[i].getNumAssentos() + ")");
            }
            comando = scan.nextInt() - 1;
            
            if(comando >= 0 && comando <= 11 && !frota[comando].comprar())
            {
                System.out.println("Sem assentos disponiveis");
            }

        } while(comando >= 0);
    }
}

class Veiculo extends ViacaoTartaruga
{
    int capacidade;
    int disponibilidade;
    String estadoOrigem;
    String estadoDestino;

    public Veiculo(int capacidadeDePassageiros, String estadoDeOrigem, String estadoDeDestino)
    {
        this.capacidade = this.disponibilidade = capacidadeDePassageiros;
        this.estadoOrigem = estadoDeOrigem;
        this.estadoDestino = estadoDeDestino;
    }

    public boolean comprar()
    {
        if(disponibilidade>0)
        {
            disponibilidade--;
            return true;
        }
        else
        {
            return false;
        }
    }

    public int getNumAssentosDisponiveis()
    {
        return disponibilidade;
    }

    public int getNumAssentos()
    {
        return capacidade;
    }

    public String getEstadoDestino() {
        return estadoDestino;
    }

    public String getEstadoOrigem() {
        return estadoOrigem;
    }
}