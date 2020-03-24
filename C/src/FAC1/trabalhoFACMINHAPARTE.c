#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float saldo = 0.0, emprestimoAPagar = 0.0, parcelasEmprestimo = 0.0;
int permissaoSaqueEmprestimo = 1, contagemEmprestimo = 0;


void operacoesDecorrentes() {
    if(saldo<0){saldo -= (saldo * (-1)) * 0.01;}

    if(emprestimoAPagar > 0) {
        contagemEmprestimo++;

        if(contagemEmprestimo == 5){

            saldo -=            (parcelasEmprestimo);
            emprestimoAPagar -= (parcelasEmprestimo);

            contagemEmprestimo = 0;

        }

    }

    //Alternâncias na permissão de saque e empréstimos
    if     (saldo<(-1000) && permissaoSaqueEmprestimo == 1){
        permissaoSaqueEmprestimo = 0;

    } else if (saldo >= 0 && permissaoSaqueEmprestimo == 0){
        permissaoSaqueEmprestimo = 1;

    }

}

void saque() {
    float saque = (-1),limiteEspecial = (-1000);

    if(permissaoSaqueEmprestimo == 0){
        system("cls");
        printf("Saque bloqueado.");
        scanf(" %*c");

    } else {
        operacoesDecorrentes();

        do{
            system("cls");
            printf("Saldo atual: %.2f", saldo);
            printf("\nDigite um valor positivo para sacar: ");
            scanf(" %f", &saque);

        } while(saque<0);

        if((saldo-saque)<=limiteEspecial){
            printf("\n\nSaque nao pode ser realizado pois ultrapassa limite especial.\nSaque e Emprestimo serao bloqueados ate que conta volte ao positivo.");
            scanf(" %*c");
            permissaoSaqueEmprestimo = 0;
            return;

        } else {
            
            saldo-=saque;

            printf("\n\nSaque de %.2f extraido da conta com sucesso.", saque);
            printf("\nSaldo atual: %.2f", saldo);

        }

    }

}

void deposito() {
    float deposito = -1;

    do{
        system("cls");
        printf("\nDigite um valor positivo para depositar: ");
        scanf(" %f", &deposito);

    } while(deposito<0);
    saldo+=deposito;

    printf("\n\nDeposito de %.2f acrescentado a conta com sucesso.", deposito);
    printf("\nSaldo atual: %.2f", saldo);

    operacoesDecorrentes();
}

float emprestimo() {

    float emprestimo = 0;

    if(permissaoSaqueEmprestimo == 0){

        system("cls");
        printf("Emprestimo bloqueado.");
        scanf(" %*c");

    } else {

        if(emprestimoAPagar > 0){

            system("cls");
            printf("Ja tem um emprestimo decorrente em sua conta.");
            scanf(" %*c");

        } else {
            do{

                system("cls");
                printf("[O BANCO NAO PERMITE EMPRESTIMOS ACIMA DE 40%% DO SEU SALDO ATUAL]");
                printf("\nDigite um valor positivo que gostaria de pedir como emprestimo: ");
                scanf(" %f", &emprestimo);

            } while (emprestimo < 0);

            if( saldo + emprestimo < (-1000) ) {

                system("cls");
                printf("VALOR EXCEDE CRÉDITO ESPECIAL, SAQUE E EMPRÉSTIMO BLOQUEADOS.");
                permissaoSaqueEmprestimo = 0;

            } else {

                if( ( emprestimo > (saldo*0.4) ) || (emprestimoAPagar > 0) ) {

                    system("cls");
                    printf("EMPRESTIMO NEGADO.");
                    scanf(" %*c");

                } else {

                    emprestimoAPagar = (emprestimo + (emprestimo*0.1) );
                    parcelasEmprestimo = (emprestimoAPagar * 0.2);

                }

            }
            operacoesDecorrentes();

        }

    }

}

void saida() {
    system("cls");
    printf("Saindo...");
    printf("\nSaldo final: %.2f", saldo);
    scanf(" %*c");
    exit(0);
}

int main() {
    char opcao;
    int rodando = 1;

    do {
        system("cls");
        printf("Digite o saldo inicial de sua conta (nao pode ser negativo)\n>");
        scanf(" %f", &saldo);

    } while(saldo<0);

    while(rodando){

        do {
            system("cls");
            printf("Saldo = %.2f", saldo);
            printf("\nOpcoes:");
            printf("\n(S)aque, (D)eposito,  (E)mprestimo,  S(a)ida");
            printf("\nPara escolher, digite a letra associada a opcao: ");
            scanf(" %c", &opcao);
            opcao = toupper(opcao);

        } while((opcao != 'S') && (opcao != 'D') && (opcao != 'E') && (opcao != 'A'));

        switch (opcao) {
            case 'S':
                saque();
                break;
            case 'D':
                deposito();
                break;
            case 'E':
                emprestimo();
                break;
            case 'A':
                saida();
                break;
        }
    }
}