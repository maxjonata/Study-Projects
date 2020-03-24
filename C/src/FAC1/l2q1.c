#include <stdio.h>

int main() {

    char condicao[18];
    float altura,peso,imc=0.0;

    printf("Digite a altura do adulto: ");
    scanf(" %f", &altura);
    printf("\nDigite o peso do adulto: ");
    scanf(" %f", &peso);

    imc=peso / (altura * altura);

    if(imc<18.5){printf("\nCondição: Abaixo do peso");}
    else if(imc<25.0){printf("\nCondição: Peso ideal");}
    else if(imc<30.0){printf("\nCondição: Sobrepeso");}
    else if(imc<35.0){printf("\nCondição: Obesidade grau I");}
    else if(imc<40.0){printf("\nCondição: Obesidade grau II");}
    else {printf("\nCondição: Obesidade grau III");}
    
}
