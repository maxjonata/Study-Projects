import java.util.Random;

public class CavalinhoDoBozo
{
    public static void main(String[] args)
    {
        cavalo cavalos[] = new cavalo[3];
        int vencedor = -1;
        cavalos[0] = new cavalo("PRETINHO");
        cavalos[1] = new cavalo("BRANQUINHO");
        cavalos[2] = new cavalo("MALHADINHO");

        while(vencedor < 0)
        {
            for(int i = 0; i < 3; i++)
            {
                if(cavalos[i].correr() >= 60) vencedor = i;
            }
            System.out.printf("%s", (vencedor < 0)?"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n":"\n");
        }

        System.out.println(cavalos[vencedor].getNome() + " GANHOU !!!");
    }
}

class cavalo extends CavalinhoDoBozo
{
    private String nome;
    private String avatar;
    private int distancia;
    private Random rand = new Random();

    public cavalo(String nomeDoCavalo)
    {
        switch(nomeDoCavalo)
        {
            case "PRETINHO":
            this.nome = nomeDoCavalo;
            this.avatar = "P>";
            break;

            case "BRANQUINHO":
            this.nome = nomeDoCavalo;
            this.avatar = "B>";
            break;

            case "MALHADINHO":
            this.nome = nomeDoCavalo;
            this.avatar = "M>";
            break;
            
        }

        this.distancia = 0;
    }

    public int correr()
    {
        this.distancia += rand.nextInt(2);
        mostrar();
        return this.distancia;
    }

    private void mostrar()
    {
        System.out.print(this.nome + ((this.nome == "PRETINHO")?"  : ":": "));//Espaços para emparelhar os 3 e melhorar o Design do jogo
        for(int i = 0; i < this.distancia; i++) System.out.print(" ");
        System.out.print(this.avatar);
        for(int i = 60; i > this.distancia; i--)System.out.print(" ");
        System.out.println("CHEGADA"); //Melhora do design do jogo, mostrando pro jogador onde é a chegada
    }

    public String getNome()
    {
        return this.nome;
    }

}

