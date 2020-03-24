#include <stdio.h>

int main() {

    double saldoMedio;

    printf("Digite o saldo médio do último ano: ");
    scanf("%lf", &saldoMedio);

    if(saldoMedio < 1000) printf("Nenhum crédito especial aplicado");
    else if(saldoMedio <= 1500) printf(" Crédito especial de: R$ %.2lf", saldoMedio*0.2);
    else if(saldoMedio <= 2500) printf(" Crédito especial de: R$ %.2lf", saldoMedio*0.3);
    else printf(" Crédito especial de: R$ %.2lf", saldoMedio*0.4);

}