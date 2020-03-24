//Questão 2 Lista 2

#include <stdio.h>

int main() {

    int numeroDoPlanetaEscolhido;
    float pesoTerra,gravidadePlaneta;

    printf("Planetas:\n1: Mercúrio        2: Vênus         3: Marte\n4: Júpiter        5: Saturno         6: Urano\n");

    do {

        printf("\nDigite o peso de uma pessoa na terra em kg: ");
        scanf(" %f", &pesoTerra);
        printf("\nDigite o número do planeta que deseja utilizar: ");
        scanf(" %d", &numeroDoPlanetaEscolhido);

    } while( numeroDoPlanetaEscolhido<1 && numeroDoPlanetaEscolhido>6 );

    switch(numeroDoPlanetaEscolhido){
        case 1:
            gravidadePlaneta = 0.37;
            break;
        case 2:
            gravidadePlaneta = 0.88;
            break;
        case 3:
            gravidadePlaneta = 0.38;
            break;
        case 4:
            gravidadePlaneta = 2.64;
            break;
        case 5:
            gravidadePlaneta = 1.15;
            break;
        case 6:
            gravidadePlaneta = 1.17;
            break;
    }

    pesoPlaneta = (pesoTerra/10) * gravidadePlaneta;

    printf("\n Seu peso no planeta escolhido seria de %.2f", pesoPlaneta);

}