#include <stdio.h>

void funcaoPedida(float *vetorReais) {

    int i;

    for( i = 0 ; i < sizeof(vetorReais) ; i++){
        if( !(vetorReais[i] <= (vetorReais[i+1])) ) {
            break;
        }
    }

    if( i != sizeof(vetorReais) ) {
        printf("Não está ordenado de forma crescente");
    } else {
        printf("Está ordenado de forma crescente");
    }

}

int main() {

}