#include <stdio.h>

int main() {

    //Variáveis

    double quantia;
    int nota100,nota50,nota20,nota10,nota5,nota2,nota1;

    //Leitura

    printf("Digite a quantia em reais do valor a ser decomposto: ");
    scanf("%lf", &quantia);

    //Processamento

    nota100 = quantia / 100;
    quantia -= (nota100*100);

    nota50 = quantia / 50;
    quantia -= (nota50*50);

    nota20 = quantia / 20;
    quantia -= (nota20*20);

    nota10 = quantia / 10;
    quantia -= (nota10*10);

    nota5 = quantia / 5;
    quantia -= (nota5*5);

    nota2 = quantia / 2;
    quantia -= (nota2*2);

    nota1 = quantia;

    //Saída

    printf("%d %d %d %d %d %d %d", nota100,nota50,nota20,nota10,nota5,nota2,nota1);

}