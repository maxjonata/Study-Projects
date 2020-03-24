#include <stdio.h>

int main() {

    //Variáveis

    unsigned char idadeDoNadador;

    //Entrada

    printf("Digite quantos anos o nadador possui: ");
    scanf("%d", &idadeDoNadador);

    //Processamento & Saída

    if(idadeDoNadador < 5) printf("\nMuito novo para uma categoria.");
    else if(idadeDoNadador <= 7) printf("\nCategoria Infantil A.");
    else if(idadeDoNadador <= 10) printf("\nCategoria Infantil B.");
    else if(idadeDoNadador <= 13) printf("\nCategoria Juvenil A.");
    else if(idadeDoNadador <= 17) printf("\nCategoria Juvenil B.");
    else printf("\nCategoria Adulto.");

}