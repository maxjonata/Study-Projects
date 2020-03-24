#include <stdio.h>

int main() {

    int horasTrabalhadas,salarioSemanal;

    printf("Digite a quantidade de horas de trabalho.\n>");
    scanf("%d", &horasTrabalhadas);

    if(horasTrabalhadas < 40){
        salarioSemanal = 8*horasTrabalhadas;
    }else{
        salarioSemanal = 320 + (12*(horasTrabalhadas-40));
    }

    printf("Salário semanal de: R$%d,00", salarioSemanal);
}