#include <stdio.h>
#include <stdlib.h>

int main() {

    int dia,mes,bissexto;

    do {
        system("cls");
        printf("Digite...\n");
        printf("(1) - Para ano Bissexto\n");
        printf("(0) - Para ano comum\n");
        printf("Opção> ");
        scanf("%d", &bissexto);
    } while (bissexto != 1 && bissexto != 0);

    printf("\nDigite a data em formato DD/MM\n>");
    scanf("%d/%d", &dia,&mes);

    if(mes<1 && mes>12){
        printf("\nARE YOU KIDDING BRO?\n");
        printf("Mês só existe de 1 a 12.");
    }
    else {
        switch (mes) {
            case 12:
                dia+=30;
            case 11:
                dia+=31;
            case 10:
                dia+=30;
            case 9:
                dia+=31;
            case 8:
                dia+=31;
            case 7:
                dia+=30;
            case 6:
                dia+=31;
            case 5:
                dia+=30;
            case 4:
                dia+=31;
            case 3:
                dia+=(28+bissexto);
            case 2:
                dia+=31;
            default:
                printf("A data digitada é o %d° dia do ano", dia);
                scanf("");
        }
    }
}