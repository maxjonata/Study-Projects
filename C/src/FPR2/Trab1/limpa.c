
void limpa(estacionamento matriz[10][10][8], int *ultimo_andar, int *ultima_fila, int *ultima_vaga)
{
    int andar,fila,vaga;
    for(andar = 0 ; andar < 10 ; andar++)
    {
        for(fila = 0 ; fila < 10 ; fila++)
        {
            for(vaga = 0 ; vaga < 8 ; vaga++)
            {
                strcpy(matriz[andar][fila][vaga].tipo, "0000000000");
                strcpy(matriz[andar][fila][vaga].placa, "0000000");
                strcpy(matriz[andar][fila][vaga].contato, "00000000000");
                strcpy(matriz[andar][fila][vaga].data, "00000000");
            }
        }
    }
    
    *ultimo_andar = andar;
    *ultima_fila = fila;
    *ultima_vaga = vaga;
}

limpa(vaga, &ultimoAndar, &ultimaFila, &ultimaVaga);