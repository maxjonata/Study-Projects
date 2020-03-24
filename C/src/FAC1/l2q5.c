/*
QUESTÃO 05: O cardápio de uma lanchonete é o seguinte:
Especificação Código Preço
Cachorro quente
100
3,50
Bauru simples
101
4,50
Bauru com ovo
102
5,20
Hamburger
103
3,00
Cheeseburger
104
4,00
Refrigerante
105
2,50
Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o valor a ser pago.
Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado a um item.
*/

#include <stdio.h>

int main()
{
    float preco;
    int codigoDoItem, quantidadeDeItens;

    printf("Código do item pedido: ");
    scanf(" %d", &codigoDoItem);
    printf("\nQuantidade que gostaria de obter: ");
    scanf(" %d", &quantidadeDeItens);

    switch(codigoDoItem)
    {
        case 100:
            preco = 3.50;
        break;
        case 101:
            preco = 4.50;
        break;
        case 102:
            preco = 5.20;
        break;
        case 103:
            preco = 3.0;
        break;
        case 104:
            preco = 4.0;
        break;
        case 105:
            preco = 2.50;
        break;
    }

    printf("\n\nValor a ser pago: %.2f", quantidadeDeItens * preco);
}