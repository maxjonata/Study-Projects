#include <stdio.h>
#include <stdlib.h>

int main() {

    char sexo;
    float altura;

    printf("Digite seu sexo, H para homem e F para mulher: ");
    scanf("%c", &sexo);
    if(sexo != 'F' && sexo != 'f' && sexo != 'H' && sexo != 'h') {
        printf("Sexo digitado é inválido.");
        exit(1);
    }
    else {
        printf("Digite sua altura em metro: ");
        scanf("%f", &altura);

        if(sexo == 'H' || sexo == 'h') printf("Seu peso ideal seria: %f kg", (72.7*altura)-58);
        else printf("Seu peso ideal seria: %f kg", (62.1*altura)-44.7);

        exit(0);
    }

}