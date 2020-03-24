#include <stdio.h>

double horaIntToDouble(int hora, int minuto)
{
    return hora + ((minuto / 60) * 100);
}

int detsitVoo(int hprev, int mprev, int hefet, int mefet)
{
    /*  hprev = hora prevista
        mprev = minuto previsto
        hefet = hora efetiva
        mefet = minuto efetivo */
    
    double horaPrevista;
    double horaEfetiva;
    int diferencaEmMinutos;

    //horaPrevista = hprev + ((mprev / 60) * 100); // como esse cálculo se repete nos 2 usando variáveis diferentes
    //horaEfetiva = hefet + ((hprev / 60) * 100);  // ele também pode virar uma função...    (horaIntToDouble)
    //  usando a função pra fazer a mesma coisa...
    horaPrevista = horaIntToDouble(hprev, mprev);
    horaEfetiva = horaIntToDouble(hefet, mefet);

    /* Transformasse 2 valores separados inteiros
        em um valor único racional que compreende-se
        da mesma forma que os inteiros nas horas...
        30 minutos = 50% de 1 hora, logo 0.5, e assim vai... */

    //Condicionais se atrasou, adiantou ou no horário

    if(horaPrevista == horaEfetiva)
    {
        //Chegou no horário
        printf("Chegou no horário");

        diferencaEmMinutos = 0;
    }
    else if(horaPrevista < horaEfetiva)
    {
        //Chegou atrasado
        printf("Chegou atrasado");

        diferencaEmMinutos = ((horaEfetiva - horaPrevista) * 60);
        /*  agora temos que converter de volta para int e passar só os minutos
            só fazer o cálculo voltando só pra minutos...       */
    }
    else if(horaPrevista > horaEfetiva)
    {
        //Chegou adiantado
        printf("Chegou adiantado");

        diferencaEmMinutos = ((horaPrevista - horaEfetiva) * 60);
        /*  agora temos que converter de volta para int e passar só os minutos
            só fazer o cálculo voltando só pra minutos...       */
    }

    return diferencaEmMinutos;
}

int main()
{
    /*  Se ele diz "n números lidos" significa que tem um limite especificado antes
        ou pelo programa ou pela pessoa que ta usando, pq N é variável de quantidade,
        logo, de limite também.                                                      */
    
    //numeroDeVoos = n
    int i, numeroDeVoos, numeroDoVoo, 
    horaPrevista, minutoPrevisto, horaEfetiva, 
    minutoEfetivo, vooComMaiorAtraso, 
    QuantidadeVoosAtrasados, maiorAtraso, atraso, 
    tempoMedioAtrasos, porcentagemDeVoosAtrasados;

    QuantidadeVoosAtrasados = 0;
    tempoMedioAtrasos = 0;

    for(i = 0; i < numeroDeVoos; i++)
    {
        printf("Número do Vôo: ");
        scanf("%d", &numeroDoVoo);

        printf("Hora Prevista de chegada: ");
        scanf("%d", &horaPrevista);
        printf("Minuto Previsto de chegada: ");
        scanf("%d", &minutoPrevisto);

        printf("Hora Efetiva de chegada: ");
        scanf("%d", &horaEfetiva);
        printf("Minuto Efetivo de chegada: ");
        scanf("%d", &minutoEfetivo)

        atraso = detsitVoo(horaPrevista, minutoPrevisto, horaEfetiva, minutoEfetivo);
        if(atraso > 0)
        {
            QuantidadeVoosAtrasados++;
            tempoMedioAtrasos += atraso;

            if(atraso > maiorAtraso)
            {
                vooComMaiorAtraso = numeroDoVoo;
            }
        }
        printf("\n\n\n\n\n");
    }

    tempoMedioAtrasos /= QuantidadeVoosAtrasados;
    porcentagemDeVoosAtrasados = QuantidadeVoosAtrasados / numeroDeVoos;

    printf("\nPercentual de voos atrasados: %d%%", porcentagemDeVoosAtrasados);
    printf("\nTempo medio de atraso: %d minutos", QuantidadeVoosAtrasados);
    printf("\nVoo com maior atraso: %d", vooComMaiorAtraso);
}
