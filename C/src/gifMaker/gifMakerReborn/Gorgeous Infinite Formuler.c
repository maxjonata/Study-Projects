#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void delay(unsigned int mseconds);
void limpaGif(const int z, const int y, const int x, char array[z][y][x]);
void menuPrincipal();
void abertura();
void criaGif(const int z, const int y, const int x, char array[z][y][x], int *zUsados);
void executaGif(const int z, const int y, const int x, char array[z][y][x], int zUsados);

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

void limpaGif(const int z, const int y, const int x, char array[z][y][x])
{
    int iX, iY, iZ;

    for (iZ = 0; iZ < z; iZ++)
    {
        for (iY = 0; iY < y; iY++)
        {
            for (iX = 0; iX < x; iX++)
            {
                array[iZ][iY][iX] = 'x';
            }
        }
    }
}

void menuPrincipal()
{

    printf(" ______________________________________ \n");
    printf("|                                      |\n");
    printf("|           MENU PRINCIPAL             |\n");
    printf("|                                      |\n");
    printf("|   (1) Criar GIF                      |\n");
    //printf("|   (2) Carregar GIF                   |\n");
    printf("|   (3) Executa GIF                    |\n");
    //printf("|   (4) Salvar GIF                     |\n");
    //printf("|   (5) Exportar em C                  |\n");
    printf("|                                      |\n");
    printf("|                            Sair (0)  |\n");
    printf("|______________________________________|\n");
    printf(" \\_ Escolha: ");
}

void abertura()
{
    const int z = 46, y = 3, x = 19;
    char abertura[z][y][x];

    strcpy(abertura[0][0],"*Gorgeous  *       ");
    strcpy(abertura[0][1],"                   ");
    strcpy(abertura[0][2],"                   ");

    strcpy(abertura[1][0],"* Gorgeous *       ");
    strcpy(abertura[1][1],"                   ");
    strcpy(abertura[1][2],"                   ");

    strcpy(abertura[2][0],"*  Gorgeous*       ");
    strcpy(abertura[2][1],"                   ");
    strcpy(abertura[2][2],"                   ");

    strcpy(abertura[3][0],"* Gorgeous *       ");
    strcpy(abertura[3][1],"                   ");
    strcpy(abertura[3][2],"                   ");

    strcpy(abertura[4][0],"* Gorgeous *       ");
    strcpy(abertura[4][1],"*Infinite  *       ");
    strcpy(abertura[4][2],"                   ");

    strcpy(abertura[5][0],"* Gorgeous *       ");
    strcpy(abertura[5][1],"* Infinite *       ");
    strcpy(abertura[5][2],"                   ");

    strcpy(abertura[6][0],"* Gorgeous *       ");
    strcpy(abertura[6][1],"*  Infinite*       ");
    strcpy(abertura[6][2],"                   ");

    strcpy(abertura[7][0],"* Gorgeous *       ");
    strcpy(abertura[7][1],"* Infinite *       ");
    strcpy(abertura[7][2],"                   ");

    strcpy(abertura[8][0],"* Gorgeous *       ");
    strcpy(abertura[8][1],"* Infinite *       ");
    strcpy(abertura[8][2],"*Formuler  *       ");

    strcpy(abertura[9][0],"* Gorgeous *       ");
    strcpy(abertura[9][1],"* Infinite *       ");
    strcpy(abertura[9][2],"* Formuler *       ");

    strcpy(abertura[10][0],"* Gorgeous *      ");
    strcpy(abertura[10][1],"* Infinite *      ");
    strcpy(abertura[10][2],"*  Formuler*      ");

    strcpy(abertura[11][0],"* Gorgeous *      ");
    strcpy(abertura[11][1],"* Infinite *      ");
    strcpy(abertura[11][2],"* Formuler *      ");

    strcpy(abertura[12][0],"* Gorgeous *      ");
    strcpy(abertura[12][1],"* Infinite * M    ");
    strcpy(abertura[12][2],"* Formuler *      ");

    strcpy(abertura[13][0],"* Gorgeous *      ");
    strcpy(abertura[13][1],"* Infinite * MA   ");
    strcpy(abertura[13][2],"* Formuler *      ");

    strcpy(abertura[14][0],"* Gorgeous *      ");
    strcpy(abertura[14][1],"* Infinite * MAK  ");
    strcpy(abertura[14][2],"* Formuler *      ");

    strcpy(abertura[15][0],"* Gorgeous *      ");
    strcpy(abertura[15][1],"* Infinite * MAKE ");
    strcpy(abertura[15][2],"* Formuler *      ");

    strcpy(abertura[16][0],"* Gorgeous *      ");
    strcpy(abertura[16][1],"* Infinite * MAKER");
    strcpy(abertura[16][2],"* Formuler *      ");

    strcpy(abertura[17][0],"* Gorgeou *       ");
    strcpy(abertura[17][1],"* Infinit * MAKER ");
    strcpy(abertura[17][2],"* Formule *       ");

    strcpy(abertura[18][0],"* Gorgeo *        ");
    strcpy(abertura[18][1],"* Infini * MAKER  ");
    strcpy(abertura[18][2],"* Formul *        ");

    strcpy(abertura[19][0],"* Gorge *         ");
    strcpy(abertura[19][1],"* Infin * MAKER   ");
    strcpy(abertura[19][2],"* Formu *         ");

    strcpy(abertura[20][0],"* Gorg *          ");
    strcpy(abertura[20][1],"* Infi * MAKER    ");
    strcpy(abertura[20][2],"* Form *          ");

    strcpy(abertura[21][0],"* Gor *           ");
    strcpy(abertura[21][1],"* Inf * MAKER     ");
    strcpy(abertura[21][2],"* For *           ");

    strcpy(abertura[22][0],"* Go *            ");
    strcpy(abertura[22][1],"* In * MAKER      ");
    strcpy(abertura[22][2],"* Fo *            ");

    strcpy(abertura[23][0],"* G *             ");
    strcpy(abertura[23][1],"* I * MAKER       ");
    strcpy(abertura[23][2],"* F *             ");
    
    strcpy(abertura[24][0],"*G  *             ");
    strcpy(abertura[24][1],"* I * MAKER       ");
    strcpy(abertura[24][2],"* F *             ");

    strcpy(abertura[25][0],"                  ");
    strcpy(abertura[25][1],"*GI * MAKER       ");
    strcpy(abertura[25][2],"* F *             ");

    strcpy(abertura[26][0],"                  ");
    strcpy(abertura[26][1],"*GI * MAKER       ");
    strcpy(abertura[26][2],"*  F*             ");

    strcpy(abertura[27][0],"                  ");
    strcpy(abertura[27][1],"*GIF* MAKER       ");
    strcpy(abertura[27][2],"                  ");

    strcpy(abertura[28][0],"                  ");
    strcpy(abertura[28][1],"                  ");
    strcpy(abertura[28][2],"                  ");

    strcpy(abertura[29][0],"                  ");
    strcpy(abertura[29][1],"*GIF* MAKER       ");
    strcpy(abertura[29][2],"                  ");

    strcpy(abertura[30][0],"                  ");
    strcpy(abertura[30][1],"                  ");
    strcpy(abertura[30][2],"                  ");

    strcpy(abertura[31][0],"                  ");
    strcpy(abertura[31][1],"*GIF* MAKER       ");
    strcpy(abertura[31][2],"                  ");

    strcpy(abertura[32][0],"                  ");
    strcpy(abertura[32][1],"                  ");
    strcpy(abertura[32][2],"                  ");

    strcpy(abertura[33][0],"                  ");
    strcpy(abertura[33][1],"GIF* MAKER        ");
    strcpy(abertura[33][2],"                  ");

    strcpy(abertura[34][0],"                  ");
    strcpy(abertura[34][1],"IF* MAKER         ");
    strcpy(abertura[34][2],"                  ");

    strcpy(abertura[35][0],"                  ");
    strcpy(abertura[35][1],"F* MAKER          ");
    strcpy(abertura[35][2],"                  ");

    strcpy(abertura[36][0],"                  ");
    strcpy(abertura[36][1],"* MAKER           ");
    strcpy(abertura[36][2],"                  ");

    strcpy(abertura[37][0],"                  ");
    strcpy(abertura[37][1]," MAKER            ");
    strcpy(abertura[37][2],"                  ");

    strcpy(abertura[38][0],"                  ");
    strcpy(abertura[38][1],"MAKER             ");
    strcpy(abertura[38][2],"                  ");

    strcpy(abertura[39][0],"                  ");
    strcpy(abertura[39][1],"AKER              ");
    strcpy(abertura[39][2],"                  ");

    strcpy(abertura[40][0],"                  ");
    strcpy(abertura[40][1],"KER               ");
    strcpy(abertura[40][2],"                  ");

    strcpy(abertura[41][0],"                  ");
    strcpy(abertura[41][1],"ER                ");
    strcpy(abertura[41][2],"                  ");

    strcpy(abertura[42][0],"                  ");
    strcpy(abertura[42][1],"R                 ");
    strcpy(abertura[42][2],"                  ");

    strcpy(abertura[43][0],"                  ");
    strcpy(abertura[43][1],".                 ");
    strcpy(abertura[43][2],"                  ");

    strcpy(abertura[44][0],"                  ");
    strcpy(abertura[44][1],"..                ");
    strcpy(abertura[44][2],"                  ");

    strcpy(abertura[45][0],"                  ");
    strcpy(abertura[45][1],"...               ");
    strcpy(abertura[45][2],"                  ");

    executaGif(z,y,x, abertura, z);
}

void criaGif(const int z, const int y, const int x, char array[z][y][x], int *zUsados)
{
    const int colunas = 40;
    int iZ,iY,iX,i,j,xpen = 0,ypen = 0, xpenaux, ypenaux, zaux = 101,aux = 0;
    char comando[50], character = 'O';
    char espacos[40] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char top[40] = {'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    char bottom[40] = {'^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^','^'};
    char column[40] = {'0','1','2','3','4','5','6','7','8','9','1','1','1','1','1','1','1','1','1','1','2','2','2','2','2','2','2','2','2','2','3','3','3','3','3','3','3','3','3','3'};
    char column2[40] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9',};


    for( iZ = 0 ; iZ < z ; ) //Etapas
    {
        system("cls");
        printf(" _______________________________________ \n");
        printf("|                                       |\n");
        printf("|  CRIANDO GIF      Imagem(z) (%02d|%02d)   |\n", iZ+1,z);
        printf("|_______________________________________|\n"); // 40 colunas
        printf("|                                       |\n");

        
        for(iY = -1 ; iY <= (y+2) ; iY++) //GERADOR AUTOMATIZADO DE IMAGEM
        {
            if(iY < 0) // TRAÇOS EM CIMA PARA DEIXAR BONITO
            {
                printf("|%.*s%.*s%.*s|\n", ((colunas - x)/2) + 1, espacos, x, top, ((colunas - x)/2) - ((x%2 == 0)?1:0) - 1, espacos);
            }
            else if(iY == y) // SINAIS DE SETINHA PARA DEIXAR BONITO
            {
                printf("|%.*s%.*s%.*s|\n", ((colunas - x)/2) + 1, espacos, x, bottom, ((colunas - x)/2) - ((x%2 == 0)?1:0) - 1, espacos);
            }
            else if(iY == y+1) // UNIDADE DOS NUMEROS SEM DEZENAS
            {
                printf("|%.*s%.*s%.*s|\n", ((colunas - x)/2) + 1, espacos, x, column, ((colunas - x)/2) - 1 -((x%2 == 0)?1:0), espacos);
            }
            else if(iY == y+2)// UNIDADE DOS NUMEROS COM DEZENAS
            {
                printf("|%.*s%.*s%.*s|\n", ((colunas - x)/2) + 1, espacos, x, column2, ((colunas - x)/2) - 1 - ((x%2 == 0)?1:0), espacos);
            }
            else // LINHAS
            {
                printf("|%.*s%d >%.*s|%.*s|\n", ((colunas - x)/2) - 2, espacos, iY, x,array[iZ][iY], (((colunas - x)/2) - 1 - ((x%2 == 0)?2:0)), espacos);
            }
        }
        
        printf("|                                       |\n");
        printf("| Detalhes do \"Lapis\" na edicao:        |\n");
        printf("|                                       |\n");
        printf("| Localizado em:   Linha(Y) = %02d        |\n", ypen);
        printf("|                  Col(X)   = %02d        |\n", xpen);
        printf("|                                       |\n");
        printf("| Caractere(C):  %c                      |\n", character);
        printf("|                                       |\n");
        printf("|      Outros comandos:                 |\n");
        printf("| (D) \"Desenha\"                         |\n");
        printf("| (E) \"Executa\"                         |\n");
        printf("| (S) para finalizar                    |\n");
        printf("| (P) ir para proxima imagem do GIF     |\n");
        printf("|_______________________________________|\n");
        printf(" \\\n");
        printf("  \\ *Para alterar algo digite a opcao seguida de = e a mudanca*\n");
        printf("   \\ *Exemplos: \"x=10\"   \"y=6  x=7\"   \"x=7   c=A    y=2\"\n");
        printf("    \\\n");
        printf("     \\____Comando: ");
        
        for(i = 0 ; i < sizeof(comando) ; i++)
        {
            comando[i] = ' ';
        }
        fflush(stdin);
        gets(comando);

        for(i = 0; i < sizeof(comando) ; i++)
        {
            if(comando[i] == '=')
            {
                switch(comando[i-1])
                {
                    case 'z': case 'Z':
                        for(j = i+1 , aux = 0 ; comando[j] == '0' || comando[j] == '1' || comando[j] == '2' || comando[j] == '3' || comando[j] == '4' || comando[j] == '5' || comando[j] == '6' || comando[j] == '7' || comando[j] == '8' || comando[j] == '9' ; j++)
                        {
                            if(aux == 0){zaux = comando[j] - '0';}else{zaux+= comando[j] - '0';}
                            if(comando[j+1] == '0' ||
                                comando[j+1] == '1' ||
                                comando[j+1] == '2' ||
                                comando[j+1] == '3' ||
                                comando[j+1] == '4' ||
                                comando[j+1] == '5' ||
                                comando[j+1] == '6' ||
                                comando[j+1] == '7' ||
                                comando[j+1] == '8' ||
                                comando[j+1] == '9')
                            {
                                zaux*=10;
                            }
                            aux++;
                        }
                        if(zaux <= z && zaux>0)
                        {
                            iZ = zaux - 1;
                        }
                        else
                        {
                            printf("\n\nErro: coluna %d do comando tem um Z impossivel de ser validado\n", i);
                            system("pause");
                        }

                        break;

                    case 'x': case 'X':
                        for(j = i+1, aux = 0 ; comando[j] == '0' || comando[j] == '1' || comando[j] == '2' || comando[j] == '3' || comando[j] == '4' || comando[j] == '5' || comando[j] == '6' || comando[j] == '7' || comando[j] == '8' || comando[j] == '9' ; j++)
                        {
                            if(aux == 0){xpenaux = comando[j] - '0';}else{xpenaux+= comando[j] - '0';}
                            if(comando[j+1] == '0' ||
                                comando[j+1] == '1' ||
                                comando[j+1] == '2' ||
                                comando[j+1] == '3' ||
                                comando[j+1] == '4' ||
                                comando[j+1] == '5' ||
                                comando[j+1] == '6' ||
                                comando[j+1] == '7' ||
                                comando[j+1] == '8' ||
                                comando[j+1] == '9')
                            {
                                xpenaux*=10;
                            }
                            aux++;
                        }
                        if(xpenaux < x && xpenaux>=0)
                        {
                            xpen = xpenaux;
                        }
                        else
                        {
                            printf("\n\nErro: coluna %d do comando tem um X impossivel de ser validado\n", i);
                            system("pause");
                        }
                        break;

                    case 'y': case 'Y':
                        for(j = i+1, aux = 0 ; comando[j] == '0' || comando[j] == '1' || comando[j] == '2' || comando[j] == '3' || comando[j] == '4' || comando[j] == '5' || comando[j] == '6' || comando[j] == '7' || comando[j] == '8' || comando[j] == '9' ; j++)
                        {
                            if(aux == 0){ypenaux = comando[j] - '0';}else{ypenaux+= comando[j] - '0';}
                            if(comando[j+1] == '0' ||
                                comando[j+1] == '1' ||
                                comando[j+1] == '2' ||
                                comando[j+1] == '3' ||
                                comando[j+1] == '4' ||
                                comando[j+1] == '5' ||
                                comando[j+1] == '6' ||
                                comando[j+1] == '7' ||
                                comando[j+1] == '8' ||
                                comando[j+1] == '9')
                            {
                                ypenaux*=10;
                            }
                            aux++;
                        }
                        if(ypenaux < y && ypenaux>=0)
                        {
                            ypen = ypenaux;
                        }
                        else
                        {
                            printf("\n\nErro: coluna %d do comando tem um Y impossivel de ser validado\n", i);
                            system("pause");
                        }
                        break;

                    case 'c': case 'C':
                        character = comando[i+1];
                        break;

                    default :
                        printf("\n\nErro: coluna %d do comando tem um \"=\" sem instrucao do que alterar\n", i);
                        system("pause");
                }
            }
            else 
            {
                switch(comando[i])
                {
                    case 'S': case 's':
                        *zUsados = iZ+1;
                        break;

                    case 'P': case 'p':
                        iZ++;
                        break;
                    
                    case 'D': case 'd':
                        array[iZ][ypen][xpen] = character;
                        break;
                    case 'E': case 'e':
                        executaGif(z, y, x, array, z);
                        break;
                }
            }
        }



    }
    *zUsados = z;
}

void executaGif(const int z, const int y, const int x, char array[z][y][x], int zUsados)
{
    int iX, iY, iZ;

    for (iZ = 0; iZ < zUsados; iZ++)
    {
        system("cls");
        for (iY = 0; iY < y; iY++)
        {
            for (iX = 0; iX < x; iX++)
            {
                printf("%c", array[iZ][iY][iX]);
            }
            printf("\n");
        }
        delay(250);
    }
}

int main()
{
    int opcao = 0, zQuant = 0;

    const int z = 10, y = 10, x = 20;
    char gif[z][y][x];
    limpaGif(z, y, x, gif);

    //abertura();

    do
    {
        system("cls");

        menuPrincipal();
        scanf(" %d", &opcao);

        switch (opcao)
        {
        case 1: //Criar GIF
            criaGif(z, y, x, gif, &zQuant);
            break;

        case 2: //Carregar GIF
            break;

        case 3: //Executa GIF
            executaGif(z, y, x, gif, zQuant);
            break;

        case 4: //Salvar GIF
            break;

        case 5: //Exportar GIF para ser usado em projetos de C
            break;
        }

    } while (opcao != 0);
}