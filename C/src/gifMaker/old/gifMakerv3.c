#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>
#include "gifMaker.h"

//   gif[etapa][y][x]
char gif[10][10][10] = {{{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                          {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}}
};

short gifLast;

/*
void desenhaGif(){

    int etapa,x,y,opcao;
    char icon,terminarGif;
    char desenhandoEtapa;

    for(etapa=0;etapa<10;etapa++){

        limpaTela();

        printf("Imagem %d: \n", etapa+1);
        mostraFrame(etapa);

        opcao = menuDesenha();

        switch ( opcao ) {
            case 0 :
                //TERMINAR GIF
                limpaTela();
                printf("Tem certeza que gostaria de terminar o GIF do jeito que está?\n> ");
                scanf(" %c", &terminarGif);
                gifLast = etapa;

                break;

            case 1 :
                //COLOCAR ICONE
                break;

            case 2 :
                //REMOVER ICONE
                break;

            case 3 :
                //PROXIMA ETAPA
                break;
            case 4 :

            break;
        }




        do{

            desenhandoEtapa='S';
            

            printf("\nSinal ASCII(Caracteres padrões de teclados) que gostaria de colocar como icone: ");
            scanf(" %c", &icon);
            printf("Coluna(eixo x da esquerda para direita) na qual gostaria de colocar este icone: ");
            scanf(" %d", &x);
            printf("Linha(eixo y de cima pra baixo) na qual gostaria de colocar este icone: ");
            scanf(" %d", &y);

            gif[etapa][y][x] = icon;

            do{

                system("cls");

                printf("\nAssim que ficou a tela: %d\n", etapa+1);
                mostraFrame(etapa);

                printf("\nContinuar pintando? [S/N]\n> ");
                scanf(" %c", &desenhandoEtapa);
                toupper(desenhandoEtapa);

            } while(desenhandoEtapa!='S' && desenhandoEtapa!='N');

        } while(desenhandoEtapa=='S');

        printf("\n\n%s\n", etapa==9?"Terminado, voltando ao menu...":"Indo para proxima etapa...");
        system("pause");
        
    }

}
*/

void desenhaGif() {

    
    switch ( menu("desenha") ) {

        case 0 :
            exit (0) ;
            break;

        case 1 :
            desenhaGif();
            break;

        case 2 :
            showGif();
            break;

        case 3 :
            examineGif();
            break;

        case 4 :
            deleteGif();
        break;

    }

}

void showGif(){
    for(int etapa = 0;etapa<10;etapa++){
        limpaTela();
        for(int y = 0;y<10;y++){
            for(int x = 0;x<10;x++){
                printf("%c", gif[etapa][y][x]);
            }
            printf("\n");
        }
        sleep(1);
    }
}

void mostraFrame(int etapa) {
    int y,x;

    printf("  0123456789   - X\n\n");
    for(y=0;y<10;y++){
        printf("%d ", y);
        for(x=0;x<10;x++){
            printf("%c", gif[etapa][y][x]);
        }
        printf("\n");
    }
    printf("|\n\n");
    printf("Y");

}

void deleteGif(){
    for(int etapa = 0;etapa<10;etapa++){
        for(int y = 0;y<10;y++){
            for(int x = 0;x<10;x++){
                gif[etapa][y][x] = ' ';
            }
        }
    }
    limpaTela();
    printf("Gif limpo/zerado!\n");
    system("pause");
}

void limpaTela() {
    system("cls");
}

void menuDesenha() {

    limpaTela();
    printf("        _______________________________         \n");
    printf("        |------>   BEM VINDO  <-------|         \n");
    printf("        |-----------------------------|         \n");
    printf("        |                             |         \n");
    printf("        |  1 - Colocar ícone          |         \n");
    printf("        |  2 - Remover ícone          |         \n");
    printf("        |  3 - Próxima Etapa do Gif   |         \n");
    printf("        |                             |         \n");
    printf("        |      0 - Terminar Gif       |         \n");
    printf("        |                             |         \n");
    printf("        |_____________________________|         \n");
    printf("         \\_ Escolha: ");

}

void menuPrincipal() {

    limpaTela();
    printf("        _______________________________         \n");
    printf("        |------>   BEM VINDO  <-------|         \n");
    printf("        |-----------------------------|         \n");
    printf("        |                             |         \n");
    printf("        |  1 - Desenhar Gif           |         \n");
    printf("        |  2 - Executar Gif           |         \n");
    printf("        |  3 - Examinar/Alterar Frames|         \n");
    printf("        |  4 - Deletar Gif            |         \n");
    printf("        |                             |         \n");
    printf("        |          0 - Sair           |         \n");
    printf("        |                             |         \n");
    printf("        |_____________________________|         \n");
    printf("         \\_ Escolha: ");

}

short menu(char menu[15]) {
    //menu == principal || menu == desenha

    short opcao;
    short wrongOption;

    setlocale(LC_ALL,"");

    do{

        if(menu == "principal") {

            menuPrincipal();

        } else {

            if(menu == "desenha") {
                menuDesenha();
            }

        }

        scanf(" %hi", &opcao);

        if(opcao<0 && opcao>4){

            wrongOption = 1;
            printf("\n Opção inválida, escolha uma opção entre as do menu.\n\n");
            system("pause");
            
        } else {

            wrongOption = 0;
            return(opcao);

        }

    } while(wrongOption);

}

int main() {

    switch ( menu("principal") ) {

        case 0 :
            exit (0) ;
            break;

        case 1 :
            desenhaGif();
            break;

        case 2 :
            showGif();
            break;

        case 3 :
            examineGif();
            break;

        case 4 :
            deleteGif();
        break;

    }
    
}