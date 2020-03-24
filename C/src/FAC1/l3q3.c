/*
QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.
*/
#include <stdio.h>

int main() {

    int numero,base,expoente,i;

    printf("-Calculando potência-\n");
    printf("\nDigite a base: ");
    scanf("%d", &base);

    numero = base;
    
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);

    for(i=1;i<expoente;i++){
        numero*=base;
    }

    printf("O resultado dessa potência é %d", numero);

}
