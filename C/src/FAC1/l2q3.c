#include <stdio.h>

int main() {

    float precoProduto;

    printf("Digite o preço do produto: R$");
    scanf("%f", &precoProduto);

    printf("\nPagamento a vista com 10%% de desconto ficará: R$%.2f", precoProduto+(precoProduto*0.10) );
    printf("\nValor da prestação para parcelamento sem juros em 5x: R$%.2f", (precoProduto/5) );
    printf("\nValor da prestação para parcelamento com 20%% de juros em 10x: R$%.2f", (precoProduto*1.2)/10 );

}