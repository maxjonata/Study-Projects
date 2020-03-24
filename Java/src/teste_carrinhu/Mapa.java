package teste_carrinhu;

class Mapa
{
    // 66 Espaços do carro andar
    char mapaVazio[] = {
        "_____________________________",
        "|                           |",
        "| |‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾| |",
        "| |                       | |",
        "| |                       | |",
        "| |                       | |",
        "| |                       | |",
        "| |_______________________| |",
        "|                           |",
        "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾",
    };
    char mapa[] = mapaVazio;
    int qtdCarros = 0;
    Carro corredor;
    int yAtual, xAtual, yParaAndar, xParaAndar;
    y = 1;
    x = 3;
    yParaAndar = 0;
    xParaAndar = 1;
    boolean correndo = true;
    
    while(correndo)
    {
        desenhaMapa();

        if(qtdCarros > 0)
        {

        }
    }

    void desenhaMapa()
    {
        for(int i = 0; i < 10; i++) System.out.println(mapa[i]);
    }
}