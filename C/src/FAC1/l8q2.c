#include <stdio.h>

void funcaoTrocaReais(float *vetor) {

    int i, z;
    float guarda;

    printf("\n\nVetor antes: { %f,", vetor[0]);
    for( z = 1 ; z < (sizeof(vetor)-1) ; z++) {
        printf(" %f,", vetor[z]);
    }
    printf(" %f }.", vetor[(sizeof(vetor)-1)]);

    for( i = 0 ; i < sizeof(vetor) ; i+=2){
        guarda = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = guarda;
    }

}

int main() {

    int i;
    float vetorReais[10];

    printf("digite um vetor de números reais de tamanho 10: ");
    for( i = 0 ; i<sizeof(vetorReais) ; i++ ) {

        scanf("%f", vetorReais[i]);

    }

    funcaoTrocaReais( vetorReais );

}