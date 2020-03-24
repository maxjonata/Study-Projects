package testezera;

public class Mapa implements Runnable
{
    // 66 Espaços para carro andar
    char[][] mapaVazio = new char[10][29];
    char carro = 'O';
    Carro corredor;
    int yAtual, xAtual, yParaAndar, xParaAndar;
    boolean correndo = true;

    public Mapa(Carro carroCorredor)
    {
        corredor = carroCorredor;
        mapaVazio[0] = "-----------------------------".toCharArray();
        mapaVazio[1] = "|                           |".toCharArray();
        mapaVazio[2] = "| |-----------------------| |".toCharArray();
        mapaVazio[3] = "| |                       | |".toCharArray();
        mapaVazio[4] = "| |                       | |".toCharArray();
        mapaVazio[5] = "| |                       | |".toCharArray();
        mapaVazio[6] = "| |                       | |".toCharArray();
        mapaVazio[7] = "| |-----------------------| |".toCharArray();
        mapaVazio[8] = "|                           |".toCharArray();
        mapaVazio[9] = "-----------------------------".toCharArray();
        yAtual = 1;
        xAtual = 3;
        yParaAndar = 0;
        xParaAndar = 1;
    }
    
    public void run()
    {
        desenhaMapa();
        checaEMudaDirecao();
        yAtual += yParaAndar;
        xAtual += xParaAndar;
    }

    private void checaEMudaDirecao()
    {
        if(yParaAndar == 1 && yAtual == 8)
        {
            xParaAndar = -1;
            yParaAndar = 0;
        }
        else if (xParaAndar == 1 && xAtual == 27)
        {
            xParaAndar = 0;
            yParaAndar = 1;
        }
        else if(yParaAndar == -1 && yAtual == 1)
        {
            xParaAndar = 1;
            yParaAndar = 0;
        }
        else if(xParaAndar == -1 && xAtual == 1)
        {
            xParaAndar = 0;
            yParaAndar = -1;
        }
    }

    private void desenhaMapa()
    {
        for(int y = 0; y < 10; y++)
        {
            for(int x = 0; x < 29; x++)
            {
                if(y == yAtual && x == xAtual)
                {
                    System.out.print(carro);
                }
                else
                {
                    System.out.print(mapaVazio[y][x]);
                }
            }
            System.out.println("");
        }
    }
}