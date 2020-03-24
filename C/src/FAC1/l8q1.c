#include <stdio.h>

void ocorrenciasX(int x, int *a) {

    int i,cont = 0;

    for(i=0;i<sizeof(a);i++){

        if(x == a[i]){cont++;}

    }

}

int main() {

    int a[10] = {0,1,2,3,4,5,6,7,8,9}, x;

    printf("\nDigite o número inteiro x a ser determinada quantas ocorrências tiveram neste vetor A: ");
    scanf(" %d", &x);

    ocorrenciasX(x, a);

}