/* Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N. */

#include <stdio.h>

int main (){

    int N, i;

    printf("Inserir numero:");
    scanf("%d", &N);

    for(i=0;i<=N;i++)
    {
        if (i%2==0)
        {
            printf("%d\n", i);
        }
    }

} 

/* Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário. */

int main(){

    int i, numero;

    printf("Insira o numero:\n ");
    scanf("%d", &numero);

    for(i=1;i<=numero;i++){

        if (numero%i==0){
            printf("%d", i);
        }
    }


}

/* Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,... */

int main(){

    int i, numero;

    printf("Insira o numero:\n ");
    scanf("%d", &numero);


    }