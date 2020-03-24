#include <stdio.h>

int main() {

    char nomeDoHospede[50],tipoDoApartamento;
    int numeroDeDiarias;
    float valorConsumoInterno, valoresDiarias[4]={350.00,275.00,200.00,150.00};

    printf("%f", valoresDiarias[1]);
    printf("Digite o nome do hóspede: ");
    scanf(" %s", nomeDoHospede);
    
    printf("Qual o tipo de apartamento utilizado? (A/B/C/D)");
    scanf(" %c", tipoDoApartamento);

    printf("Número de diárias utilizadas pelo hóspede");
    scanf(" %d", &numeroDeDiarias);

    printf("O valor do consumo interno do hóspede");
    scanf(" %f", &valorConsumoInterno);

}