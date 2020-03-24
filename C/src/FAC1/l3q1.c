/*QUESTÃO 01: Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos.
*/

#include <stdio.h>

int main() {

    int i,inteiro,testaMultiplo,totalDeMultiplos=0;
    
    printf("digite um número inteiro\n>");
    scanf("%d", &inteiro);

    for(i=1;i<=50;i++) {

        testaMultiplo=0;

        printf("\n(%d/50)digite um valor inteiro: ", i);
        scanf("%d", &testaMultiplo);

        if( (testaMultiplo%inteiro) == 0) {
            totalDeMultiplos++;
            printf("édivisível");
        }
    }

    printf("Destes valores inteiros, %d são divisíveis pelo primeiro número inteiro", totalDeMultiplos);

}
