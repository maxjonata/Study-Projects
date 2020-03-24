#include<stdio.h>
#include <stdlib.h>

void saque_funcao(float *saldo, int *limiteEspecial, float *juros)
{
    float  saque=0;
    printf("Quanto deseja sacar:");
        scanf(" %f", &saque);
            if(saque>*saldo && saque<=(*saldo+1000 ))
    {
 *juros= (saque-*saldo)/100;

    }
        if(saque<0)
        {
                printf("Por favor digite um valor não negativo");
        }
    
         else
    if(saque>=*saldo+1000)
    {
     printf("Você tem saldo insuficiente para realizar este saque");
     limiteEspecial++;
    }
     

    if(saque<=0) 
    {
    *saldo=*saldo-saque;
}
}
void deposito_funcao(float *saldo1)
{
    float valor;

    printf("\nInserir o valor a ser depositado:");
    scanf("%f", &valor);
    
    *saldo1=*saldo1+valor;
}

void emprestimo_funcao(float *saldo1, float *prestacao)
{
        float emprestimo;
    
    printf("Insira o valor do emprestimo:");
    scanf("%f, &emprestimo");
    
    if(emprestimo>*saldo1*(40/100))
    {
        
    printf("Emprestimo nao permitido.");
}
else
{
    if(emprestimo<=*saldo1*(40/100))
    {
        *saldo1+=emprestimo;
        *prestacao=(emprestimo/10)*6;

    }
}
}

int main()
{
    float retorno[2];
    int SD, Escolha, limiteEspecial;
 float sAldo, juros=0, prestacao;
 

    printf("Insira o  saldo da sua conta bancaria:");
    scanf(" %f", &sAldo);
    system("cls");
    do
    {
    
    if(prestacao>0)
    {
        int prest;
        prest++;
        if(prest==5 || prest==10 || prest==15 || prest==20 || prest==25)
        {
            sAldo-=prestacao;
            if(prest==25)
            {
                prestacao=0;
            }
        }
    }    
    if(limiteEspecial==1)
    {

    printf("Saldo atual: %.2f\n Oque deseja fazer?\n 1)BLOQUEADO\n 2)Deposito\n 3)Bloqueado\n 4)Sair\n", sAldo);
    scanf(" %d", &Escolha);

    if(Escolha==2)
    {
      printf("Saldo atual: %.2f\n Oque deseja fazer?\n 1)Saque\n 2)Deposito\n 3)BLOQUEADO\n 4)Sair\n", sAldo);
    scanf(" %d", &Escolha);
    }
    else
    if(Escolha==4)
    {
        printf("\nObrigado por escolher nossa agencia,\n Tenha um bom dia\n.");
    }
    else
    if(Escolha!=2 || Escolha!=4)
    {
    printf("Operaçao invalida");
    }
        deposito_funcao(&sAldo);
    }

    printf("Saldo atual: %.2f\n Oque deseja fazer?\n 1)Saque\n 2)Deposito\n 3)Emprestimo\n 4)Sair\n", sAldo);
    scanf(" %d", &Escolha);

    if(Escolha==1)
    {
    saque_funcao(&sAldo, &limiteEspecial, &juros);
    }
    else
    if(Escolha==2)
    {
    deposito_funcao(&sAldo);
    }
    else
    if(Escolha==3)
    {
     emprestimo_funcao(&sAldo,&prestacao);
    }
    else
    if(Escolha==4)
    {

        printf("Obrigado por escolher nossa agencia,\n Tenha um bom dia.");
        system("pause");
    }
    else
    if(Escolha!=1 || Escolha!=2 || Escolha!=3 || Escolha!=4)
    {
    printf("Operaçao invalida");
    }
        if(juros>0)
        {
        sAldo=sAldo-juros;
        }
        if(sAldo>=0)
        {
            juros=0;
        }
}
while(Escolha!=4);
}





    







