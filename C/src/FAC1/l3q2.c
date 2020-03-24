/*
QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.
*/

#include <stdio.h>

int main() {

    int qtdValores,i;
    float valor,maiorValor=0.0,menorValor=0.0;

    printf("Digite a quantidade de valores que deseja ser lido.\n> ");
    scanf("%d", &qtdValores);

    for(i=0;i<qtdValores;i++){

        printf("\nValor %d: ", i+1);
        scanf("%f", &valor);

        if(menorValor == 0.0){

            menorValor = valor;

        } else {

            if(valor<menorValor){

                menorValor=valor;

            }

        }

        if(valor>maiorValor){

            maiorValor=valor;

        }

    }

    printf("O menor valor foi %f\n", menorValor);
    printf("O maior valor foi %f", maiorValor);
    
}
