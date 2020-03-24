import java.util.Scanner;

public class Adivnum
{
    public static void main(String[] args0)
    {
        Scanner scan = new Scanner(System.in);
        int numeroSecreto = (int)((Math.random() * 1000) +1);
        String jogador[] = new String[2];
        System.out.print("Jogador 1: ");
        jogador[0] = scan.next();
        System.out.print("Jogador 2: ");
        jogador[1] = scan.next();
        byte jogando = (byte)(Math.random() * 2);
        int numeroTestado;
        System.out.println("Jogador sorteado para comecar: " + jogador[(jogando == 1)?0:1]);
        do
        {
            jogando = (byte)((jogando == 1)?0:1);
            System.out.print("Palpite " + jogador[jogando] + ":");
            numeroTestado = scan.nextInt();
            if(numeroTestado > numeroSecreto) System.out.println("Computador: numero eh menor");
            if(numeroTestado < numeroSecreto) System.out.println("Computador: numero eh maior");
        } while(numeroTestado != numeroSecreto);
        System.out.println("Computador: " + jogador[jogando] + " ganhou!");
    }
}