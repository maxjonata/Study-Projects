package t3;

import java.util.Scanner;

public class Cesta
{
    int produtosNaCesta;
    Produto[] listaDeProdutos = new Produto[12];

    public Cesta()
    {
        produtosNaCesta = 0;
        listaDeProdutos = null;
    }

    public void adicionarProduto(Produto item)
    {
        if(produtosNaCesta < listaDeProdutos.length)
        {
            listaDeProdutos[produtosNaCesta] = item;
            produtosNaCesta++;
        }
        else
        {
            //Mensagem de lista cheia
        }
    }

    public double calcularTotal()
    {
        double total = 0;
        for(int i = 0; i < produtosNaCesta; i++)
        {
            total += (listaDeProdutos[i].getPreco() * listaDeProdutos[i].qtde);
        }
        return total;
    }

    public void listarCesta()
    {
        for(int i = 0; i < produtosNaCesta; i++)
        {
            System.out.println(listaDeProdutos[i].getClass().getSimpleName() + ": R$ " + (listaDeProdutos[i].getPreco * listaDeProdutos[i].qtde) + "        QTD = " + listaDeProdutos[i].qtde);
        }
        System.out.println("Valor Total: R$ " + calcularTotal());
    }

    public static void main(String[] args)
    {
        //1 - Colocar produto na cesta indicando tipo e quantidade
        //2 - mostrar o conteúdo da cesta e ao final o valor da cesta
        //3 - limpar a cesta

        int choice;


        while(choice != 0)
        {
            Cesta cesta = new Cesta();
            Scanner scan = new Scanner(System.in);
            System.out.printf("\n\n\n\n\n");
            System.out.println("Menu:");
            System.out.println("1 - Colocar produto na cesta");
            System.out.println("2 - Mostrar conteúdo da cesta e valor final");
            System.out.println("3 - Limpar cesta");
            System.out.println();
            System.out.println("0 - Sair");
            choice = scan.nextInt();
            System.out.printf("\n\n\n\n\n");
            
            switch(choice)
            {
                case 1:
                    int choice2;
                    while(choice2 < 1 || choice2 > 7)
                    System.out.println("Adicionando produto...");
                    System.out.println("Lista de Itens:");
                    System.out.println("1 - Banana");
                    System.out.println("2 - Maçã");
                    System.out.println("3 - Pera");
                    System.out.println("4 - Uva");
                    System.out.println("5 - Morango");
                    System.out.println("6 - Limão");
                    System.out.println("7 - Mamão");
                    System.out.println("Produto a ser adicionado: ");
                    choice2 = scan.nextInt();
                    Produto item;
                    switch(choice2)
                    {
                        case 1:
                            item = new Banana();
                        break;
                        case 2:
                            item = new Maca();
                        break;
                        case 3:
                            item = new Pera();
                        break;
                        case 4:
                            item = new Uva();
                        break;
                        case 5:
                            item = new Morango();
                        break;
                        case 6:
                            item = new Limao();
                        break;
                        case 7:
                            item = new Mamao();
                        break;
                    }
                    System.out.println("Quantidade a ser adicionada: ");
                    choice2 = scan.nextInt();
                    item.setQtde(choice2);

                    Cesta.adicionarProduto(item);
                break;
                case 2:
                    cesta.listarCesta();
                break;
                case 3:
                    cesta = new Cesta();
                break;
            }
        }
    }
}